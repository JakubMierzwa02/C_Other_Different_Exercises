#include <iostream>

/*
    Write a program that prints the divisors of a positive number
*/

int main()
{
    int n, i = 1;
    std::cout << "Enter integer: ";
    std::cin >> n;

    while (i < n)
    {
        if (n%i == 0)
            std::cout << i << " * ";
        i++;
    }
    std::cout << n << '\n';

    return 0;
}
