#include <iostream>

int main()
{
    int num, div = 2, cnt = 0;;
    std::cout <<"Ingrese un numero mayor que 1 "<<"\n";
    std::cin >> num;
    while(num < 1)
    {
        std::cout <<"Ingrese un numero valido, por favor"<<"\n";
        std::cin >> num;
    }
    std::cout << num << " = ";
    while(num > 1)
    {
        if(num % div == 0)
        {
            num = num / div;
            cnt = cnt + 1;
            std::cout << div;
            if(num > 1)
            {
                std::cout << " x ";
            }
        }
        else
        {
            div = div + 1;
        }
    }
    if(cnt == 1)
    {
    std::cout <<"\n" << "El número es primo"<<"\n";
    }
    else
    std::cout <<"\n" <<"El número no es primo"<<"\n";
    std::cout <<"El numero total de factores es: "<<cnt<<"\n";
}