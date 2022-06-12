#include <iostream>

/*
    Write a program that reads an integer and prints the number of occurrences of each digit in that number.
*/

int main()
{
    int digits[10]{0};
    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    while (n > 0)
    {
        digits[n%10]++;
        n /= 10;
    }

    for (int i = 0; i < 10; i++)
        if (digits[i] != 0)
            std::cout << i << ": " << digits[i] << " occurrences \n";

    return 0;
}
