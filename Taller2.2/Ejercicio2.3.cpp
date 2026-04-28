#include <iostream>
#include <string>

std::string censura(std::string frase)
{
    int i = 0, rev;
    std::string censfrase;
    while(i < frase.size())
    {
        char rev = frase[i];
        if(rev == 65 || rev == 69 || rev == 73 || rev == 79 || rev == 85)
        {
            rev = 42;
        }
        if(rev == 97 || rev == 101 || rev == 105 || rev == 111 || rev == 117)
        {
            rev = 42;
        }
        censfrase = censfrase + rev;
        i = i + 1;
    }
    return censfrase;
}
int main()
{
    std::string frase, censurada;
    std::cout << "Introduce una frase para realizar censura: "<<"\n";
    getline(std::cin, frase);
    censurada = censura(frase);
    std::cout << "Su frase censurada es: "<<"\n";
    std::cout << censurada <<"\n";
}