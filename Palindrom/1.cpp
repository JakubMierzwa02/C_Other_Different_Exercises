#include <iostream>
#include <string>
#include <vector>

/*
    Write a program that, after reading the sentence, checks if all the words in the sentence
    consist of the same number of letters and if they are all palindromes.
*/

bool palindrom(std::string s)
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

bool condition(std::vector<std::string>& words)
{
    if (!palindrom(words[0]))
        return false;

    for (int i = 1; i < words.size(); i++)
        if (words[i].size() != words[i - 1].size() || !palindrom(words[i]))
            return false;

    return true;
}

int main()
{
    std::string sentence;
    std::cout << "Enter a sentence: \n";
    std::getline(std::cin, sentence);

    std::vector<std::string> words;
    words.resize(1);

    int i = 0, j = 0;
    while (i < sentence.size())
    {
        if (sentence[i] != ' ')
            words[j] += sentence[i];
        else
        {
            j++;
            words.resize(j + 1);
        }
        i++;
    }

    if (condition(words))
        std::cout << "TRUE \n";
    else
        std::cout << "FALSE \n";


    return 0;
}
