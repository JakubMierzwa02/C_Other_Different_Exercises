#include <iostream>
#include <string>

/*
    Write a program that encrypts the text in capital letters in Caesar cipher.
*/


std::string caesar(std::string text, int key)
{
    std::string cryptogram;
    int code;
    for (int i = 0; i < text.size(); i++)
    {
        if (text[i] == ' ')
            cryptogram += ' ';
        else
        {
            code = text[i] + key;
            if (code > 'Z')
            code -= 26;
            cryptogram += char(code);
        }
    }
    return cryptogram;
}

int main()
{
    std::string text;
    int key;
    std::cout << "Enter text: ";
    std::getline(std::cin, text);
    std::cout << "Key: ";
    std::cin >> key;

    std::cout << "Cryptogram: " << caesar(text, key) << '\n';

    return 0;
}
