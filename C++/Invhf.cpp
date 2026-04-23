#include <iostream>
#include <string>

int main()
{
    int i=0, n;
    std::string frase, resultante = "";
    std::cout << "Puedes escribir una frase, por favor" <<std::endl;
    getline(std::cin, frase);
    n = frase.size();
        while(i <= n-1)
        {
            if(frase[i] == 'h')
            resultante = resultante + 'f';
            else
        {
            if(frase[i] == 'H')
            {
                resultante = resultante + 'F';
            }
            else
            resultante = resultante + frase[i];
        }
        i = i + 1;
        }
    std::cout << resultante <<std::endl;
}
