#include <iostream>

/*
    Write a program that checks that all digits of the number read in are single-digit even numbers.
*/

int main()
{
    bool isEven = true;
    int n;
    std::cout << "Enter integer: ";
    std::cin >> n;

    while (n > 0 && isEven)
    {
        if ((n%10)%2 != 0)
            isEven = false;
        n /= 10;
    }

    if (isEven)
        std::cout << "TRUE \n";
    else
        std::cout << "FALSE \n";

    return 0;
}
