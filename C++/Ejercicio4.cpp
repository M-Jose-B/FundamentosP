#include <iostream>
#include <string>

int main()
{
    int num, num2, num16;
    std::string base2 = "", base16 = "";
    std::cin >> num;
    num2 = num;
    num16 = num;
    if(num > 1 && num < 255)
    {
        while(num2 != 1)
        {
            base2 = base2 + (num2 % 2);
            num2 = num2 / 2;
        }
        while(num16 != 1)
        {
            base16 = base16 + (num2 % 16);
            num16 = num16 / 16;
        }
        std::cout <<num<<"En base 2: "<< base2 <<"\n";
        std::cout <<num<<"En base 16: "<< base16 <<"\n";
    }
    else
    std::cout <<"Ingrese un número valido por favor"<<"\n";
    std::cin >> num;
}