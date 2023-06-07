#include <iostream>
#include <memory>

int main()
{
    int index;
    int max;
    std::unique_ptr<int[]> arr = std::make_unique<int[]>(9);

    for (size_t i = 0; i < 9; i++)
    {
        std::cin >> arr[i];
    }
    
    max = arr[0];
    index = 1;

    for (size_t i = 0; i < 9; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            index = i+1;
        }
    }
    std::cout << max << "\n" << index << "\n";

    return 0;
}