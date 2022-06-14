#include <iostream>
#include <ctime>
#include <vector>

/*
    Write a program that determines the span of a data set contained in an array of n integers.
*/

const int N = 100;

void draw(std::vector<int>& numbers)
{
    for (int i = 0; i < N; i++)
        numbers.push_back(std::rand()% 1000 + 1);
}

std::pair<int, int> min_max(std::vector<int> numbers)
{
    int min = INT_MAX;
    int max = INT_MIN;
    std::pair<int, int> minMax;

    for (int i = 0; i < numbers.size(); i++)
    {
        if (numbers[i] <= min)
        {
            min = numbers[i];
            minMax.first = numbers[i];
        }
        if (numbers[i] >= max)
        {
            max = numbers[i];
            minMax.second = numbers[i];
        }
    }
    return minMax;
}

int main()
{
    srand(time(NULL));

    std::vector<int> numbers;
    draw(numbers);

    std::cout << "Min: " << min_max(numbers).first << '\n' << "Max: " << min_max(numbers).second << '\n';

    return 0;
}
