#include <iostream>

int main()
{
    int a, b, c;
    std::cin >> a >> b;
    std::cin >> c;

    if ((b+c) >= 60)
    {
        if ((a + (b+c)/60) >= 24)
        {
            a = (a + (b+c)/60)%24;
        }
        else
        {
            a += (b+c)/60;
        }
    
        b = (b+c)%60;
    }
    else
    {
        b += c;
    }

    std::cout << a << " " << b << std::endl;

    return 0;
}