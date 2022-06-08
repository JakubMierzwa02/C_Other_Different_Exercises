#include <iostream>
#include <fstream>
#include <string>

/*
    Write a program to encrypt the text from a file in uppercase.
    Use different keys for vowels and consonants.
*/

const std::string vowels = "AEIOUY";

std::string loadText()
{
    std::string temp, text;
    std::ifstream in;
    in.open("note.txt");

    while (!in.eof())
    {
        in >> temp;
        text += temp + ' ';
    }
    in.close();

    return text;
}

bool isVowel(char c)
{
    for (int i = 0; i < vowels.size(); i++)
        if (c == vowels[i])
            return true;
    return false;
}

std::string caesar(std::string text, int key_v, int key_c)
{
    std::string cryptogram;
    int code;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == ' ')
            cryptogram += ' ';
        else
        {
            if (isVowel(text[i]))
                code = text[i] + key_v;
            else
                code = text[i] + key_c;
            if (code > 'Z')
                code -= 26;
            cryptogram += char(code);
        }
    }
    return cryptogram;
}

int main()
{
    int key_v, key_c;
    std::cout << "Text: \n" << loadText() << "\n\n";
    std::cout << "Key for vowels: ";
    std::cin >> key_v;
    std::cout << "Key for consonants: ";
    std::cin >> key_c;

    std::cout << "Text encrypted: " << caesar(loadText(), key_v, key_c) << '\n';

    return 0;
}
