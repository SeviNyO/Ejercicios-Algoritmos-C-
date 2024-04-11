#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cmath>


using namespace std;

double numero (double a) {

    double cond1 = pow(a,6)+a -2;
    double cond2 = sqrt(pow (a,3)) + 4*a +1;
    double cond3 = pow (a,2)+1;

    return ( a <= 0 ) ? cond1 : ( a > 0 && a < 4 ) ? cond2 : ( a >= 4 ) ? cond3 : 0 ;

}

int main (){

    double valorcito;
     
     cout << "Ingresa un valor" << endl ;
     cin >> valorcito;
     cout << numero(valorcito);

    return 0;

 }