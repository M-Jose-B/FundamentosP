#include <iostream>

int maxcd(int a, int b)
{
    int mcd;
     while ( b != 0)
    {
        mcd = a % b;
        a = b;
        b = mcd;
    }
    mcd = a;
    return mcd;
}
int mincm(int a, int b, int mcd)
{
    int ab, mcm;
    ab = a*b;
    mcm = ab / mcd;
    return mcm;
}
int main()
{
    int a,b,mcd,mcm;
    std::cout <<"Ingrese un numero a" <<"\n";
    std::cin >> a;
    while(a < 0)
    {
        std::cout <<"Ingrese un número valido por favor"<<"\n";
        std::cin >> a;
    }
    std::cout <<"Ingrese un numero b" <<"\n";
    std::cin >> b;
    while(b < 0)
    {
        std::cout <<"Ingrese un número valido por favor"<<"\n";
        std::cin >> b;
    }
    mcd = maxcd(a,b);
    mcm = mincm(a,b,mcd);
    std::cout << "El mcd de ambos numeros es: " <<mcd <<"\n";
    std::cout << "El mcm de ambos numeros es: " <<mcm <<"\n";
}