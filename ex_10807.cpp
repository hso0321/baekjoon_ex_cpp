#include <iostream>
#include <memory>

int main()
{
    int n,tester;
    int count = 0;
    std::cin >> n;
    std::unique_ptr<int[]> arr1 = std::make_unique<int[]>(n);
    
    for (size_t i = 0; i < n; i++)
    {
        int temp;

        std::cin >> temp;
        arr1[i] = temp;
    }

    std::cin >> tester;

    for (size_t i = 0; i < n; i++)
    {
        if (arr1[i]==tester)count++;
    }
    
    std::cout << count << "\n";
    
    return 0;
}