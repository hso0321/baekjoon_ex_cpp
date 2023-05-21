#include <iostream>
#include <iomanip>

int main()
{
    int a,b;
    
    std::cin>> a >> b;

    double c,d,e;
    int f,g;

    c = (double) a+b;
    d = (double) a-b;
    e = (double) a*b;
    f =  a/b;
    g =  a%b;

    std::cout<< c << std::endl;
    std::cout<< d << std::endl;
    std::cout<< e << std::endl;
    std::cout<< f << std::endl;
    std::cout<< g << std::endl;
}