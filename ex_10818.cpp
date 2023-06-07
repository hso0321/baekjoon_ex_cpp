#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int n,x;
    int min, max;
    
    cin >> n;

    unique_ptr<int[]> arr = make_unique<int[]>(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    min = arr[0];
    max = arr[0];

    for (size_t i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    cout << min <<  " "  << max << "\n";
    
    return 0;
}