#include <iostream>
using namespace std;

using ll = long long int;

void Verificar(ll codigo);

int main () {

    ll codigo;

    cout << "Ingresa tu codigo de estudiante: " << endl;
    cin >> codigo;

    cout << "********************************" << endl;

    Verificar(codigo);

    return 0;
}

void Verificar(ll codigo) {

    int año,
        mes,
        ingreso,
        facultad,
        becado;

    año = codigo/10000000;
    mes = (codigo/100000) % 100;

    //char
    ingreso = (codigo/1000)%100;
    facultad = (codigo/10)%100;
    becado = (codigo%10);

    cout << "Ano de ingreso: " << año << endl;
    cout << "Mes de ingreso: " << mes << endl;
    cout << "Modalidad de ingreso: " << (char) ingreso << endl;
    cout << "Facultad: "   << (char) facultad << endl;
    cout << "Becado? (si 1, no 0): " << becado << endl;
}   