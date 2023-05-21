#include <iostream>

int main()
{
    int a,b,c;

    std::cin >> a >> b >> c;

    if (a == b)
    {
        // a == b
        if (b == c)
        {
            // a = b = c
            std::cout << 10000 + a*1000 << std::endl;
        }
        else
        {
            // a = b
            std::cout << 1000 + a*100 << std::endl;
        }        
    }

    else if (a > b)
    {
        // a > b
        if (b == c)
        {
            // b = c
            std::cout << 1000 + b*100 << std::endl;
        }
        else if (b > c)
        {
            // a > b > c, a max
            std::cout << a*100 << std::endl;
        }
        else
        {
            // a > b , b < c, compare a, c
            if (a == c)
            {
                std::cout << 1000 + a*100 << std::endl;                
            }
            else if (a > c)
            {
                // a > b, a > c, a max
                std::cout << a*100 << std::endl;
            }
            else
            {
                // a > b, a < c, c max
                std::cout << c*100 << std::endl;
            }
        }
    }
    else
    {
        // a < b
        if (b == c)
        {
            // b = c
            std::cout << 1000 + b*100 << std::endl;
        }
        else if (b > c)
        {
            // a < b, c < b, b max
            if (a == c)
            {
                // a = c
                std::cout << 1000 + a*100 << std::endl;
            }
            else
            {
                // a < b, c < b, b max
                std::cout << b*100 << std::endl;
            }
            

        }
        else
        {
            // a < b, b < c, c max
            std::cout << c*100 << std::endl;
        }       
    }
    
    return 0;
}