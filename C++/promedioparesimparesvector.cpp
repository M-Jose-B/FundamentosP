#include <iostream>
#include <vector>

int main()
{
    std::vector<int> pares;
    std::vector<int> impares;
    int num, sumap = 0, sumai = 0, promp = 0, promi = 0, i;
    while(num != 0)
    {
        std::cout << "Introduzca un numero: ";
        std::cin >> num;
        while(num < 0)
        {
        std::cout <<"Introduzca un numero positivo: ";
        std::cin >> num;
        }
        if(num % 2 == 0 && num != 0)
        {
            pares.push_back(num);
        }
        else
        {
            impares.push_back(num);
        }
    }
    for(i = 0; i < pares.size(); i++)
    {
        sumap = sumap + pares[i];
    }
    for(i = 0; i < impares.size(); i++)
    {
        sumai = sumai + impares[i];
    }
    promp = sumap / pares.size();
    promi = sumai / impares.size();
    std::cout << "El promedio de los pares es: " << promp <<"\n";
    std::cout << "El promedio de los impares es: " << promi <<std::endl;
}