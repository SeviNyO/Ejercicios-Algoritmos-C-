#include <iostream>
#include <cmath>
#include <cstdlib>
#include <algorithm>

using namespace std;


double numin(double a, double b) {

    double menor = min(a,b);

    return menor;

}
int main () {

    double a;
    double b;

    cout << "Ingresa el primer numero: " ;
    cin  >> a;
    cout << "Ingresa el segundo numero: " ;
    cin  >> b;
    cout << "***************";
    cout << endl << "El menor de los numeros es: " << numin(a,b);

    return 0;
}
