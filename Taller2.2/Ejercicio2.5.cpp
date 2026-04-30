#include <iostream>
#include <string>

bool mayus(std::string contraseña)
{
    int i = 0;
    bool mayus = false;
    while(i < contraseña.size())
    {
        char rev = contraseña[i];
        if(rev >= 65 && rev <= 90)
        {
            mayus = true;
        }
        i = i + 1;
    }
    return mayus;
}
bool minus(std::string contraseña)
{
    int i = 0;
    bool minus = false;
    while(i < contraseña.size())
    {
        char rev = contraseña[i];
        if(rev >= 97 && rev <= 122)
        {
            minus = true;
        }
        i = i + 1;
    }
    return minus;
}
bool largo(std::string contraseña)
{
    int caracteres;
    bool largo = false;
    caracteres = contraseña.size();
    if(caracteres > 8)
    {
        largo = true;
    }
    return largo;
}
bool digitos(std::string contraseña)
{
    int i = 0;
    bool digitos = false;
    while(i < contraseña.size())
    {
        char rev = contraseña[i];
        if(rev >= 48 && rev <= 57)
        {
            digitos = true;
        }
        i = i + 1;
    }
    return digitos;
}

int main()
{
    bool caract, mayusv, minusv, digit;
    std::string contraseña;
    std::cout <<"Introduzca su contraseña: "<<"\n";
    getline(std::cin, contraseña);
    caract = largo(contraseña);
    mayusv = mayus(contraseña);
    minusv = minus(contraseña);
    digit = digitos(contraseña);
    if(caract == true)
    {
        if(mayusv == true)
        {
            if(minusv == true)
            {
                std::cout <<"Su contraseña es fuerte, felicidades"<<"\n";
            }
            else
            {
                if(digit == true)
                {
                    std::cout <<"Su contraseña es fuerte, felicidades"<<"\n";
                }
                else
                {
                    std::cout <<"Su contraseña es media, puede mejorar"<<"\n";
                }
            }
        }
        else
        {
            if(minusv == true)
            {
                if(digit == true)
                {
                    std::cout <<"Su contraseña es fuerte, felicidades"<<"\n";
                }
                else
                {
                    std::cout <<"Su contraseña es media, puede mejorar"<<"\n";
                }
            }
            else
            {
                if(digit == true)
                {
                    std::cout <<"Su contraseña media, puede mejorar"<<"\n";
                }
                else
                {
                    std::cout <<"Su contraseña es debil, por favor cambiela"<<"\n";
                }
            }
        }
    }
    else
    {
        if(mayusv == true)
        {
            if(minusv == true)
            {
                if(digit == true)
                {
                    std::cout <<"Su contraseña es media, puede mejorar"<<"\n";
                }
                else
                {
                    std::cout <<"Su contraseña media, puede mejorar"<<"\n";
                }
            }
            else
            {
                if(digit == true)
                {
                    std::cout <<"Su contraseña media, puede mejorar"<<"\n";
                }
                else
                {
                    std::cout <<"Su contraseña es debil,por favor cambiela"<<"\n";
                }
            }
        } 
        else
        {
            if(minusv == true)
            {
                if(digit == true)
                {
                    std::cout <<"Su contraseña media, puede mejorar"<<"\n";
                }
                else
                {
                    std::cout <<"Su contraseña debil,por favor cambiela"<<"\n";
                }
            }
            else
            {
                std::cout <<"Su contraseña debil,por favor cambiela"<<"\n";
            }
        }
    }
}