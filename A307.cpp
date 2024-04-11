#include <iostream>
#include <cmath>

using namespace std;

    double ConvertPulg(double x);

int main () {

    double cm;

    cout << "Ingrese los centimetros a convertir a pulgadas: ";
    cin >> cm;
    cout << cm << " cm equivale a " << ConvertPulg(cm) << " pulgadas "; 
}

    double ConvertPulg(double x) {

        double conversion = x/2.54;
        return conversion;

    }