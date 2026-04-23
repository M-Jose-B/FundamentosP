#include <iostream>
#include <iomanip>

int main()
{
    int cantn = 0;
    float notas = 0.1, cantapro = 0, cantdesapro = 0, promnota = 0.0, notamax = 0.0, notamin = 0.0, sumanota = 0;
    bool primeraN = true;
    while(notas != -1)
    {
        std::cout << "Ingrese la nota: "<<"\n";
        std::cin >> notas;
        if(notas < 0.0 || notas > 5.0)
        {
            continue;
        }
        if(primeraN)
        {
            notamax = notas;
            notamin = notas;
            primeraN = false;
        }
        if(notas > 0.0 || notas < 5.0)
        {
            cantn = cantn + 1;
                if(notas >= 3.0)
                {
                cantapro = cantapro + 1;
                }
                if(notas < 3.0)
                {
                cantdesapro = cantdesapro + 1;
                }
                if(notamax < notas)
                {
                notamax = notas;
                }
                if(notamin > notas)
                {
                notamin = notas;
                }
                sumanota = sumanota + notas;
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