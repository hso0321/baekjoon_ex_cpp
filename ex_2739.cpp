#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    for (size_t i = 1; i < 10; i++)
    {
        std::cout<< n << " * " << i <<" = " << n * i << std::endl;
    }

    return 0;
}