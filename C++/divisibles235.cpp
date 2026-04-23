#include <iostream>

int main()
{
    int n,i;
    i = 1; 
    std::cout <<"Ingrese un numero: " <<std::endl;
    std::cin >>n;
        while (i <= n)
        { 
            if( i % 2 == 0)
            {
                if (i % 3 == 0)
                {
                std::cout <<i << ". Es divisible entre 2 y 3" <<std::endl;
                }
                else
                {
                    if( i % 5 == 0)
                    std::cout <<i <<". Es divisible entre 2 y 5" <<std::endl;
                    else
                    std::cout <<i << ". Es divisible entre 2" <<std::endl;
                }
            }
            else 
            {
                if ( i % 3 == 0)
                {
                    if (i % 5 == 0)
                    {
                    std::cout <<i << ". Es divisible entre 3 y 5" <<std::endl;
                    }
                    else
                    std::cout <<i << ". Es divisible entre 3" <<std::endl;
                }
                else
                {
                    if(i % 5 == 0)
                    std::cout <<i << ". Es divisible entre 5" <<std::endl;
                    else{}
                }
            }
            if(i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
            {
            std::cout <<i << ". " <<std::endl;
            }
            else{}
            i = i + 1;
        }
}