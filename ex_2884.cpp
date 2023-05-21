#include <iostream>

int main()
{
    int a,b;
    std::cin >> a >> b;
    if (b >= 45)
    {
        b -= 45;
    }
    else
    {
        b = 15 + b;
        if (a == 0)
        {
            a = 23;
        }
        else
        {
            a -= 1;
        }
    }
    std::cout << a << " " << b << std::endl;

    return 0;
}