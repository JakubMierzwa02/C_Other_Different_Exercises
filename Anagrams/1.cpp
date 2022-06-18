#include <iostream>
#include <string>

/*
    Write a program that reads the three words and checks to see if they are anagrams.
*/

void sSort(std::string& s)
{
    int i, j, m;
    char ch;
    for (i = 0; i < s.size() - 1; i++)
    {
        m = i;
        for (j = i + 1; j < s.size(); j++)
            if (s[j] < s[m])
                m = j;
        ch = s[i];
        s[i] = s[m];
        s[m] = ch;
    }
}

bool anagrams(std::string s1, std::string s2, std::string s3)
{
    if (s1.size() != s2.size() || s1.size() != s3.size())
        return false;
    sSort(s1);
    sSort(s2);
    sSort(s3);
    return (s1 == s2 && s1 == s3);
}

int main()
{
    std::string s1, s2, s3;
    std::cout << "Enter 3 words: ";
    std::cin >> s1 >> s2 >> s3;

    if (anagrams(s1, s2, s3))
        std::cout << "Words are anagrams \n";
    else
        std::cout << "Words are not anagrams \n";

    return 0;
}
