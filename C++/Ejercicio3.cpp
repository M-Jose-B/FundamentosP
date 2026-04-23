#include <iostream>
#include <iomanip>

int main()
{
    int cantn = 0;
    float notas = 0.1, cantapro = 0, cantdesapro = 0, promnota = 0.0, notamax = 0.0, notamin = 5.0, sumanota = 0;
    while(notas != -1)
    {
        if(notas > 0.0 && notas < 5.0)
        {
            std::cout << "Ingrese la nota: "<<"\n";
            std::cin >> notas;
            cantn = cantn + 1;
            if (notas != -1)
            {
                if(notas >= 3.0)
                {
                cantapro = cantapro + 1;
                }
                if(notas < 3.0)
                {
                cantdesapro = cantdesapro + 1;
                }
                if(notamax < notas && notas < 5.0)
                {
                notamax = notas;
                }
4                if(notamin >= notas)
                {
                notamin = notas;
                }
                sumanota = sumanota + notas;
            }
            else
            {
                cantn = cantn - 1;
            }
        }
        else
        {
        std::cout << "Ingrese un valor valido por favor"<<"\n";
        std::cin >> notas;
        }
    }
    promnota = sumanota / cantn;
    std::cout << "Cantidad de notas ingresadas: "<< cantn <<"\n";
    std::cout << "El promedio de las notas es: "<< std::setprecision(3) << promnota <<"\n";
    std::cout << "La nota maxima fue: "<< notamax <<"\n";
    std::cout << "La nota minima fue: "<< notamin <<"\n";
    std::cout << "La cantidad de notas aprobadas es: "<< cantapro <<"\n";
    std::cout << "La cantidad de notas desaprobadas es: "<< cantdesapro <<"\n";
}