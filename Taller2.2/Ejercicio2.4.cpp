#include <iostream>
bool perfect(int num)
{
    int perf = 0, div = 1;
    bool perfects;
    while(div < num)
        {
            if(num % div == 0)
            {
                perf = perf + div;
            }
            div = div + 1;
        }
        if(perf == num)
        {
            perfects = true;
        }
        else
        {
            perfects = false;
        }
        div = 1;
        perf = 0;
        return perfects;
}

int main()
{
    int num;
    bool perf;
    while(num != 0)
    {
        std::cout << "Ingrese un número por favor (ingrese 0 para salir): "<<"\n";
        std::cin >> num;
        while(num < 0)
        {
            std::cout <<"Ingrese un numero valido por favor(Positivo): "<<"\n";
            std::cin >> num;
        }
        perf = perfect(num);
        if(perf == true)
        {
            std::cout <<"Su número es perfecto"<<"\n";
        }
        else
        {
            std::cout <<"Su número no es perfecto"<<"\n";
        }
    }
}