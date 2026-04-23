#include <iostream>
#include <string>

int main()
{
    int n=0;
    std::string num = "";
    std::string final = "";
    std::cin >> num;
    while(n < num.size())
    {
    final = num[n] + 1;
    if(final == ":"){
           final = "0";
         }  
    n = n + 1;
    std::cout << final;
    }
}