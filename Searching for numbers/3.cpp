#include <iostream>
#include <ctime>
#include <vector>

/*
    Write a program that finds the number with the largest sum of digits in an array of n integers from 0 to 99999.
*/

const int N = 100;

void draw(std::vector<int>& numbers)
{
    int random_int;
    for (int i = 0; i < N; i++)
    {
        random_int = rand()% RAND_MAX;
        numbers.push_back(random_int);
    }
}

void write(std::vector<int> numbers)
{
    for (int i = 0; i < N; i++)
        std::cout<<numbers[i]<<'\n';
}

int sum_of_digits(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int main()
{
    srand(time(NULL));

    std::vector<int> numbers;
    draw(numbers);
    write(numbers);

    int max = INT_MIN;
    int sum;
    int maxNumber;

    for (int i = 0; i < N; i++)
    {
        sum = sum_of_digits(numbers[i]);
        if (sum > max)
        {
            max = sum;
            maxNumber = numbers[i];
        }
    }


    std::cout << "Number with the largest sum of digits: " << maxNumber << '\n';

    return 0;
}
