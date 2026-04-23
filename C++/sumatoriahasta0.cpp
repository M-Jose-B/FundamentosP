#include <iostream>
int main()
{
    int n,sump,sumn,promp,promn,po,ne;
    sump = 0;
    sumn = 0;
    promp = 0;
    promn = 0;
    n = 1;
    while (n !=0)
    {
        std::cout <<"Ingrese un numero "<<std::endl;
        std::cin >> n;
        if (n > 0)
        {
        sump = sump + n;
        po = po + 1;
        }
        else 
        {
            if (n > 0)
            {
            sumn = sumn + n;
            ne = ne + 1;
            }
            else{}
        }
    }
    promp = sump / po;
    promn = sumn / ne;
    std::cout <<"La cantidad de positivos son: "<<po<<std::endl;
    std::cout <<"La cantidad de negativos son: "<<ne<<std::endl;
    std::cout <<"El promedio de los positivos es: "<<promp<<std::endl;
    std::cout <<"El promedio de los negativos es: "<<promn<<std::endl;
}