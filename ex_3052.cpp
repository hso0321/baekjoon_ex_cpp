#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<int[]> arr = make_unique<int[]>(42);
    int count = 0;
    for (size_t i = 0; i < 42; i++)
    {
        arr[i]=0;
    }
    

    for (size_t i = 0; i < 10; i++)
    {
        int n;
        cin >> n;
        arr[n%42] += 1;
    }
    
    for (size_t i = 0; i < 42; i++)
    {
        if(arr[i] != 0) count++;
    }
    
    cout << count << "\n";


    return 0;
}