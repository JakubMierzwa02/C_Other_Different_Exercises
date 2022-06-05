#include <iostream>
#include <string>
#include <vector>

/*
    Write a program that reads a word and writes the longest sequence of consecutive letters in that word which is a palindrome.
*/

bool Palindrom(std::string s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    std::vector<std::string> palindroms;
    std::string word, palindrom;
    std::cout << "Enter word: ";
    std::cin >> word;

    int i = 0;

    while (i < word.size())
    {
        int j = i + 1;
        while (j < word.size())
        {
            int k = i, l = j;
            while (k <= j)
            {
                palindrom += word[k];
                k++;
            }
            if (Palindrom(palindrom))
                palindroms.push_back(palindrom);
            j++;
            palindrom = "";
        }
        i++;
    }

    int max = 0;
    std::string max_s;
    for (int i = 0; i < palindroms.size(); i++)
    {
        std::cout << palindroms[i] << '\n';
        if (palindroms[i].size() > max)
        {
            max = palindroms[i].size();
            max_s = palindroms[i];
        }
    }

    std::cout << "The longest sequence: " << max_s << '\n';

    return 0;
}
