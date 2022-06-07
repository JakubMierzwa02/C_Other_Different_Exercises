#include <iostream>
#include <cmath>

/*
    Write a program that finds perfect numbers.
    Note: A perfect number is equal to the sum of all its divisors.
*/

int geometric_sum(int n)
{
    int sum = 1;
    for (int i = 1; i <= n; i++)
        sum += std::pow(2, i);
    return sum;
}

bool isPrime(int n)
{
    int d = 2;
    if (n < 2)
        return false;
    while (d * d <= n)
    {
        if (n%d == 0)
            return false;
        d++;
    }
    return true;
}

int main()
{
    for (int i = 1; i < INT_MAX; i++)
        if (isPrime(geometric_sum(i)))
            std::cout << geometric_sum(i) * std::pow(2, i) << '\n';

    return 0;
}
