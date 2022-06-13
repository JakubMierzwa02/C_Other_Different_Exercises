#include <iostream>

/*
    Write a program that will read positive integers from the keyboard until a zero
    and print the number of occurrences of individual digits in all the numbers read in total.
*/

int main()
{
    int digits[10]{0};
    int n, temp;

    do
    {
        std::cout << "Enter an integer: ";
        std::cin >> n;
        temp = n;

        while (temp > 0)
        {
            digits[temp%10]++;
            temp /= 10;
        }
    } while (n != 0);

    for (int i = 0; i < 10; i++)
        if (digits[i] != 0)
            std::cout << i << ": " << digits[i] << " occurrences \n";

    return 0;
}
