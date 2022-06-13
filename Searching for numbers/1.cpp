#include <iostream>
#include <ctime>
#include <vector>

/*
    Write a program that will check if a given number is in an ordered array of n integers.
    The result should be the position of the item you are looking for.
*/

void draw(std::vector<int>& numbers)
{
    numbers.push_back(std::rand()% 10 + 1);
    for (int i = 1; i < 100; i++)
        numbers.push_back(numbers[i - 1] + rand()% 10 + 1);
}

int searchBin(const std::vector<int> numbers, int x)
{
    int left = 0, right = numbers.size() - 1, middle;
    while (left < right)
    {
        middle = (left + right) / 2;
        if (numbers[middle] < x)
            left = middle + 1;
        else
            right = middle;
    }

    if (numbers[left] == x)
        return left;
    else
        return -1;
}

int main()
{
    srand(time(NULL));

    int n;
    std::vector<int> numbers;
    draw(numbers);

    for (int i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << ' ';

    std::cout << "\n\nLooking for: ";
    std::cin >> n;

    int found = searchBin(numbers, n);

    if (found != -1)
        std::cout << "Found: " << found << " position \n";
    else
        std::cout << "Not found \n";


    return 0;
}
