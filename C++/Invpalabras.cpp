#include <iostream>
#include <string>

int main()
{
    int i;
    std::string frase, invfrase="", palabra = "";
    std::cout << "Coloque una frase para inventirla" <<std::endl;
    getline(std::cin, frase);
    for(i=0; i < frase.size(); i++)
    {
        if(frase[i] == ' ')
        {
            invfrase = invfrase + palabra + " ";
            palabra = "";
        }
        else
            palabra = frase[i] + palabra;
    }
    if (frase.size() > 0)
        invfrase = invfrase + palabra;  
    std::cout << invfrase <<std::endl;
}