#include <iostream>
#include <vector>
#include <ctime>

/*
    Write a program that will allow to decide whether among n positive integers there were three numbers a, b, c
    for which it is impossible to construct a triangle with lengths a, b, c.
*/

int main()
{
    srand(time(NULL));
    int n;
    std::cout << "How many integers(numbers will be randomly generated): ";
    std::cin >> n;

    std::vector<int> integers;
    std::cout << "Integers: \n";
    for (int i = 0; i < n; i++)
    {
        integers.push_back(rand()%20 + 1);
        std::cout << integers[i] << ' ';
    }
    std::cout << "\n\n";

    for (int i = 2; i < n; i++)
        if (integers[i] + integers[i - 1] <= integers[i - 2] ||
            integers[i] + integers[i - 2] <= integers[i - 1] ||
            integers[i - 1] + integers[i - 2] <= integers[i])
            {
                std::cout << integers[i - 2] << ", " << integers[i - 1] << ", " << integers[i] << " Cannot build a triangle \n";
            }


    return 0;
}
