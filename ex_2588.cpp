#include <iostream>

int main()
{
    int a,b;
    int c,d,e,f;

    std::cin >> a;
    std::cin >> b;

    c = a*(b%10);
    d = a*((b/10)%10);
    e = a*((b/100));
    f = c + 10*d + 100*e;

    std::cout << c <<std::endl;
    std::cout << d <<std::endl;
    std::cout << e <<std::endl;
    std::cout << f <<std::endl;

    return 0;
}