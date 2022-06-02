#include <iostream>

/*
    Write a program which writes the smallest digit for the read positive integer.
*/

int main()
{
    int n, min = INT_MAX;
    std::cout << "Enter integer: ";
    std::cin >> n;

    if (n > 0)
    {
        while (n > 0)
        {
            if (n%10 < min)
            min = n%10;
            n /= 10;
        }
        std::cout << "The smallest digit: " << min << '\n';
    }
    else
        std::cout << "Integer must be positive \n";

    return 0;
}
