#include <iostream>
#include <fstream>
#include <string>
#include <vector>

/*
    Write a program that reads data from the input file and lists how many words of each length are in it (1 - 10).
*/

int main()
{
    std::ifstream in("note2.txt");

    std::string word;
    int lengths[11]{0};

    while (!in.eof())
    {
        in >> word;
        lengths[word.size() - 1]++;
    }

    for (int i = 1; i <= 10; i++)
        if (lengths[i] != 0)
            std::cout << i << ": " << lengths[i] << " words \n";

    return 0;
}
