#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

double nmayor(double a, double b, double c) {

    return (a < b && b > c) ? b :  (b < a && a > c) ? a : (b < c && c > a) ? c: (a == b && b == c) ? b : (a < b && b > c) ? b :;
    
    }

int main() {

    double x,y,z;

    cout << "Ingresa 3 numeros ";
    cin >> x >> y >> z;
    cout << nmayor(x,y,z);

    return 0;
}