#include <iostream>

int invnum(int num)
{
    int numinv = 0, mod, i = 1;
    while(num != 0)
    {
        mod = num % 10;
        num = num / 10;
        numinv = ((numinv * 10) + mod);
    }
    return numinv;
}
int main()
{
    int num, num2;
    bool verificacion;
    std::cout <<"Ingrese un número positivo: "<<"\n";
    std::cin >> num;
    while(num < 0)
    {
        std::cout <<"Ingrese un número valido por favor"<<"\n";
        std::cin >> num;
    }
    num2 = invnum(num);
    if(num == num2)
        std::cout <<"Su número es un palíndromo"<<"\n";
    else
        std::cout <<"Su número no es un palíndromo"<<"\n";
}