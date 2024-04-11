#include <iostream>
#include <cmath>

using namespace std;

    void Tiempo(int totalseconds, int & hours, int & minutes, int & second);

int main () {

    int hour, minutes, second;
    int segunditos;

    cout << "Ingresa los segundos: ";
    cin >> segunditos;

    Tiempo(segunditos,hour,minutes, second);
    cout << "Tu resultado es: " ;
    cout << "Segundos ingresados: " << segunditos << endl;
    cout << "Horas: " << hour << endl;
    cout << "Minutos: " << minutes << endl;
    cout << "Segundos: " << second << endl;

}

    void Tiempo(int totalseconds, int & hours, int & minutes, int & second) {

        hours = totalseconds/3600;
        totalseconds %= 3600;
        minutes = totalseconds/60;
        second = totalseconds%60;
    }
