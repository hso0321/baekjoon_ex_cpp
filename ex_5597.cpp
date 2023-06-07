#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<int[]> arr = make_unique<int[]>(30);

    for (size_t i = 0; i < 30; i++)
    {
        arr[i] = 0;
    }
    
    for (size_t i = 0; i < 28; i++)
    {
        int n;
        cin >> n;
        arr[n-1] = 1;
    }

    for (size_t i = 0; i < 30; i++)
    {
        if(arr[i] != 1) cout << i+1 << "\n";
    }
    

    return 0;
}