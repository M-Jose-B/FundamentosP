#include <iostream>
#include <string>

int main()
{
    int i;
    std::string frase, palabra, frasefinal ="", remplazo, revision = "";
    std::cout << "Escriba una frase por favor"<<std::endl;
    getline(std::cin, frase);
    std::cout << "Escriba una palabra por favor"<<std::endl;
    getline(std::cin, palabra);
    std::cout << "Escriba un remplazo a esa palabra"<<std::endl;
    getline(std::cin, remplazo);
    for(i=0; i < frase.size() + 1; i++)
    {
        revision = revision + frase[i];
        if(frase[i] == ' ' || frase[i] == '\0')
        {
            frasefinal = frasefinal + revision;
            revision = "";
        }
        else
        {
        if(revision == palabra)
        {
        revision = remplazo;
        }
        }
    }
    std::cout <<"Su frase reemplazada es: "<<std::endl;
    std::cout << frasefinal <<std::endl;
}