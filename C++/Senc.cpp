#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    double fact, n, i, sum, angulo, a;

    cin >> angulo;
    cin >> n;
    fact = 1;
    i = 1;
    a = 2 * i + 1;
    angulo = angulo * 3.14159 / 180;
    for (angulo = 0; angulo <= n; angulo++) {
        fact = 1;
        i = 1;
        while (i <= a) {
            fact = fact * i;
            i = i + 1;
        }
        sum = a * pow(angulo, a);
    }
    cout << fact << endl;
    return 0;
}

// The following implements type conversion functions.
string toString (double value) { //int also
    stringstream temp;
    temp << value;
    return temp.str();
}

int toInt (string text) {
    return atoi(text.c_str());
}

double toDouble (string text) {
    return atof(text.c_str());
}
