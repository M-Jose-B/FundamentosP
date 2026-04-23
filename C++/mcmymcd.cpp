#include <iostream>
int main()
{
    int a,b,mcd,mcm,ab;
    std::cout <<"Ingrese un numero a" <<std::endl;
    std::cin >> a;
    std::cout <<"Ingrese un numero b" <<std::endl;
    std::cin >> b;
    ab = a*b;
        while ( b != 0)
        {
            mcd = a % b;
            a = b;
            b = mcd;
        }
    mcd = a;
    mcm = (ab)/mcd;
    std::cout << "El mcm de ambos numeros es: " <<mcd <<std::endl;
    std::cout << "El mcm de ambos numeros es: " <<mcm <<std::endl;
}