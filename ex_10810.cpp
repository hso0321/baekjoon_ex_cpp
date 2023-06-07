#include <iostream>
#include <memory>
using namespace std;

int main()
{
    int n,m;

    cin >> n >> m;
    unique_ptr<int[]> arr = make_unique<int[]>(n);

    for (size_t idx = 0; idx < m; idx++)
    {
        int i, j, k;
        cin >> i >> j >> k;
        for(int idx2 = i-1; idx2 < j; idx2++)
        {
            arr[idx2] = k;
        }
    }
    
    for (size_t i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n";

    return 0;
}