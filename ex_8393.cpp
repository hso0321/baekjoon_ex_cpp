#include <iostream>

int main()
{
    int n;
    int res = 0;

    std::cin >> n;

    for (size_t i = 1; i <= n; i++)
    {
        res += i;
    }

    std::cout << res << std::endl;
    
    return 0;
}