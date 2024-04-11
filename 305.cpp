#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

double zeropone(double a) {
    return (a < 0) ? -1 : (a > 0) ? 1 : (a == 0) ? 0 : 0;
}

int main() {
    double numerito;

    cout << "Ingresa un numero positivo, negativo o cero: ";
    cin >> numerito;
    cout << zeropone(numerito);

    return 0;
}