#include <iostream>

/*
    Write a program that finds the first three pairs of amicable numbers.
    Note: Amicable numbers are two positive integers each equal to the sum of the proper divisors of the other number.
*/

int sum_of_divisors(int n)
{
    int sum = 0;
    for (int i = 1; i * 2 <= n; i++)
        if (n%i == 0)
            sum += i;
    return sum;
}

int main()
{
    bool amicable;
    for (int i = 1; i < 100000; i++)
    {
        amicable = false;
        int j = i + 1;
        while (!amicable && j < i * 1.3)
        {
            if ((sum_of_divisors(i) == j) && (sum_of_divisors(j) == i))
            {
                std::cout << i << ' ' << j << '\n';
                amicable = true;
            }
            j++;
        }
    }

    return 0;
}
