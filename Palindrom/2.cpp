#include <iostream>
#include <string>

/*
    Write a program that lists all three-digit palindromic numbers.
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
    std::string s;
    int num;

    for (int i = 100; i < 1000; i++)
    {
        num = i;
        while (num > 0)
        {
            char c = num%10 + '0';
            s += c;
            num /= 10;
        }
        if (palindrom(s))
            std::cout << s << ' ';
        s = "";
    }

    return 0;
}
