#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

float cubo (float a)
{
   return  pow(a,3);
}

int main () {

float cubito;
cout << "Ingresa un numero :";
cin >> cubito;
cout << cubito << "al cuadrado es: " << cubo (cubito);

return 0;
}

