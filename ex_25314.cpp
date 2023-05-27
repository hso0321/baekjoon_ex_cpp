#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    for (size_t i = 0; i < N/4; i++)
    {
        std::cout<< "long ";
    }
    std::cout << "int"<< std::endl;

    return 0;
}