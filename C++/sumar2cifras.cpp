#include <iostream>

using namespace std;

int main()
{
    int num, res = 0, r, factor = 1;
    cout << "Ey, ponga un numero";
    cin >> num;
    while (num > 0)
    {
        r = num % 10;
        num = num / 10; /*tambien se puede colocar num /= 10*/
        res = res + ((r+2) % 10) * factor;
        factor = factor * 10; /* tambien se puede colocar factor *= 10 */
    }
    cout << res;


}

