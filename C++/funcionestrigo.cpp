#include <iostream>
#include <cmath>
int fact(int x)
{
    int prod = 1, i;
    for (i = 1; i <= x; i++)
    {
        prod = prod * i;
    }
    return prod;
}
float sen(int n, int angulo)
{
    float x, suma = 0.0;
    int i;
    x = (3.14159/180) * angulo;
    for (i = 0; i <= n; i++)
    {
        suma = suma + ((pow(-1, i)) * (pow(x, 2*i + 1)) ) / (fact(2 * i + 1));
    }    
    return suma;
}
float cos(int n, int angulo)
{
    float x, suma = 0.0;
    int i;
    x = (3.14159/180) * angulo;
    for (i = 0; i <= n; i++)
    {
        suma = suma + ((pow(-1, i)) * (pow(x, 2*i)) ) / (fact(2 * i));
    }    
    return suma;
}
int main()
{
    int n, operacion;
    float angulo, senx, cosx, tanx;
    std::cout << "¿Qué operación te gustaria calcular?"<<"\n";
    std::cout << "1 es la funcion seno"<<"\n";
    std::cout << "2 es la funcion coseno"<<"\n";
    std::cout << "3 es la funcion tangente"<<"\n";
    std::cin >> operacion;
    std::cout << "valor de n (terminos)?: "<<"\n";
    std::cin >> n;
    std::cout << "Angulo (grados)?: "<<"\n";
    std::cin >> angulo;
        switch(operacion)
        {
        case(1):
            senx = sen(n, angulo);
            std::cout << senx <<"\n";
            break;
        case(2):
            cosx = cos(n, angulo);
            std::cout << cosx <<"\n";
        break;
        case(3):
            senx = sen(n, angulo);
            cosx = cos(n, angulo);
            tanx = senx / cosx;
            std::cout << tanx <<"\n";
        break;
        default:
        std::cout << "Por favor puedes escribir un valor correcto"<<"\n";
    }
}