#include <iostream>
#include <memory>

using namespace std;

int main()
{
    int n,x;
    
    cin >> n >> x;

    unique_ptr<int[]> arr = make_unique<int[]>(n);

    for (size_t i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i]<x) cout << arr[i] << " ";
    }
    cout << "\n";
    
    return 0;
}