#include <iostream>

/*
    Write a program that counts the number of 1's in its binary representation for the entered positive integer
*/

int main()
{
    int n, counter = 0;
    std::cout << "Enter integer: ";
    std::cin >> n;

    while (n > 0)
    {
        if (n%2 == 1)
            counter++;
        n /= 2;
    }
    std::cout << "1's counter: " << counter << '\n';

    return 0;
}
