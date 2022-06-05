#include <iostream>

/*
    Write a program that reads integers a, b and prints how many palindromic numbers are in the range [a, b].
*/

bool palindrom(std::string s)
{
    int i = 0, j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main()
{
    int a, b;
    std::cout << "Enter a, b \n";
    std::cout << "a = ";
    std::cin >> a;
    std::cout << "b = ";
    std::cin >> b;

    std::string s;
    int num, counter = 0;

    for (int i = a; i <= b; i++)
    {
        num = i;
        while (num > 0)
        {
            char c = num%10 + '0';
            s += c;
            num /= 10;
        }
        if (palindrom(s))
        {
            std::cout << s << ' ';
            counter++;
        }
        s = "";
    }

    std::cout << "\n\n" << counter << " palindromic numbers. \n";



    return 0;
}
