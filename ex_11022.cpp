#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    
    int n; 
    short a, b;

    cin >> n;
    for (size_t i = 0; i < n; i++)
    {
        cin >> a >> b;
        cout << "Case #"<< i+1 << ": " << a << " + " << b << " = " << a+b << "\n";
    }
    
    return 0;
}