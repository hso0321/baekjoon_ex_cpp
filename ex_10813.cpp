#include <iostream>
#include <memory>
using namespace std;

int main()
{
    int n,m;

    cin >> n >> m;
    unique_ptr<int[]> arr = make_unique<int[]>(n);

    for (size_t i = 0; i < n; i++)
    {
        arr[i] = i+1;
    }
    
    for (size_t i = 0; i < m; i++)
    {
        int a,b,temp;
        cin >> a >> b;
        temp = arr[a-1];
        arr[a-1] = arr[b-1];
        arr[b-1] = temp;
    }
    
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    cout << "\n";

    return 0;
}