#include <iostream>

int main()
{
    int n;

    std::cin >> n;

    int *a= new int[n];
    int *b= new int[n];

    for (size_t i = 0; i < n; i++)
    {
        std::cin >> a[i] >> b[i];
    }

    for (size_t i = 0; i < n; i++)
    {
       std::cout << a[i] + b[i] << std::endl;
    }    

    delete[] a;
    delete[] b;
    
    return 0;
}