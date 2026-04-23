#include <iostream>

int main()
{
    int num, fibo,a=1,b=0;
    std::cout <<"Diga un numero"<<std::endl;
    std::cin >> num;
    while(a+b < num)
    {
    fibo = a + b;
    b = a;
    a = fibo;
    }
    std::cout <<a<<std::endl;
}
 