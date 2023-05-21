#include <iostream>
#include <iomanip>

int main()
{
    // int a,b;
    // std::cin>> a >> b;
    // double c;
    // c = (double)a/b;
    float d = 0.3333333333333333;
    double e = 0.3333333333333333;

    // std::cout<<std::setprecision(10);
    // std::cout<< a <<std::endl;
    // std::cout<< b <<std::endl;
    // std::cout<< c <<std::endl;

    std::cout<<std::setprecision(6);
    std::cout<< d <<std::endl;
    std::cout<< e <<std::endl;

    std::cout<<std::setprecision(7);
    std::cout<< d <<std::endl;
    std::cout<< e <<std::endl;
    
    std::cout<<std::setprecision(8);
    std::cout<< d <<std::endl;
    std::cout<< e <<std::endl;

    std::cout<<std::setprecision(9);
    std::cout<< d <<std::endl;
    std::cout<< e <<std::endl;

    std::cout<<std::setprecision(10);
    std::cout<< d <<std::endl;
    std::cout<< e <<std::endl;
    
    return 0;
}