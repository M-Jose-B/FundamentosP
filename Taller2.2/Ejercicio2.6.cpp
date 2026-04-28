#include <iostream>
#include <string>

std::string mayus(std::string frasem)
{
    int i = 0, rev;
    bool espacio = true;
    std::string nuevafrase;
    while(i < frasem.size())
    {
    char rev = frasem[i];
    if(rev >= 65 && rev <= 90)
    {
        nuevafrase = nuevafrase + rev;
        i = i + 1;
        espacio = false;
    }
    else
    {
        if(frasem[i] == ' ')
        {
            nuevafrase = nuevafrase + " ";
            i = i + 1;
            espacio = true;
        }
        else
        {
            if(espacio == true)
            {
            rev = rev - 32;
            espacio = false;
            }
            nuevafrase = nuevafrase + rev;
            i = i + 1;
        }
    }      
    }
    return nuevafrase;
}
int main()
{
    std::string frase, frasemayus;
    std::cout <<"Introduce una frase"<<"\n";
    getline(std::cin, frase);
    frasemayus = mayus(frase);
    std::cout <<"Su frase con mayusculas es:"<<"\n";
    std::cout << frasemayus <<"\n";
}