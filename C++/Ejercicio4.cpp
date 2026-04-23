#include <iostream>
#include <string>

int main()
{
    int num, num2, num16, res;
    std::string base2 = "", base16 = "";
    std::cout << "Ingrese un numero entre 1 y 255: " << "\n";
    std::cin >> num;
    num2 = num;
    num16 = num;
    while(num < 1 || num > 255)
    {
        std::cout << "Ingrese un numero valido por favor" << "\n";
        std::cin >> num;
    }
        while(num2 != 0)
        {
            base2 = std::to_string((num2 % 2)) + base2;
            num2 = num2 / 2;
        }
        while(num16 != 0)
        {
            res = num16 % 16;
            if(res < 10)
            {
                base16 = std::to_string(res) + base16;
            }
            else
            {
                char letra = 'A' + (res - 10);
                base16 = letra + base16;
            }
            num16 = num16 / 16;
        }
        std::cout <<num<<" En base 2: "<< base2 <<"\n";
        std::cout <<num<<" En base 16: "<< base16 <<"\n";
}