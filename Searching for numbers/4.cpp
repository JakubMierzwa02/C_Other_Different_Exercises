#include <iostream>
#include <ctime>
#include <vector>

/*
    Write a function that will result in a number of elements in the interval [a; b] contained in an array of n integers.
*/

const int N = 1000;

void draw(std::vector<int>& numbers)
{
    numbers.push_back(std::rand()% 10 + 1);
    for (int i = 1; i < N; i++)
        numbers.push_back(numbers[i - 1] + std::rand()% 10 + 1);
}

void print(std::vector<int> numbers)
{
    for (int i = 0; i < N; i++)
        std::cout << numbers[i] << ' ';
}

int searching(std::vector<int> numbers, int a, int b)
{
    int left = 0, right = N - 1, middle;
    int counter = 0;
    while (left < right)
    {
        middle = (left + right) / 2;
        if (numbers[middle] < a)
            left = middle + 1;
        else
            right = middle;
    }

    while (numbers[left] <= b)
    {
        counter++;
        left++;
    }
    return counter;
}

int main()
{
    srand(time(NULL));

    int a, b;
    std::vector<int> numbers;
    draw(numbers);
    //print(numbers);

    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;

    std::cout << "Number of elements between a and b: " << searching(numbers, a, b) << '\n';

    return 0;
}
