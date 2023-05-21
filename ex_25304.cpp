#include <iostream>

int main()
{
    int X, N, total = 0;
    
    std::cin >> X;
    std::cin >> N;

    int* a = new int[N];
    int* b = new int[N];

    for (size_t i = 0; i < N; i++)
    {
        std::cin >> a[i] >> b[i];
        total += a[i] * b[i];
    }

    if (X == total)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No"<< std::endl;
    }

    return 0;
}