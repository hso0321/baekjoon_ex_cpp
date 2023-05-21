#include <iostream>
#include <string>

int main()
{
char a[51];

std::cin>> a;
// std::cout<< a << std::endl;


std::string str(a);
str += "??!";
std::cout<< str << std::endl;


return 0;
}