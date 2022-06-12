#include <iostream>

/*
    Write a program that will read integers from the keyboard until a zero and print the largest of them.
*/

int main()
{
    int n, max = 0;
    do
    {
        std::cout << "Enter an integer: ";
        std::cin >> n;
        if (n > max)
            max = n;

    } while (n != 0);

    std::cout << "Max: " << max << '\n';

    return 0;
}

