#include <iostream>

int main()
{
    int a;
    std::cin >> a;

    if ((a%400) == 0)
    {
        std::cout << "1" << std::endl;
        return 0;
    }
    if ((a%100) == 0)
    {
        std::cout << "0" << std::endl;
        return 0;
    }
    if((a%4) == 0)
    {

        std::cout << "1" << std::endl;
        return 0;
    }
    std::cout << "0" << std::endl;
    return 0;
}