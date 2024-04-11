#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//Definir las funciones

void DividirCifras(const string numero, int& anum, int& bnum, int& cnum);
int Max3(int a, int b, int c);
int Min3(int a, int b, int c);
int Intemedio(int a, int b, int c);

// Main

int main () {

    string numerito;

    cout << "Ingresa un numero de 12 cifras";
    cin >> numerito;

    int a,b,c;

    DividirCifras(numerito,a,b,c);

    cout << "Mayor:" << Max3(a,b,c) << endl;
    cout << "Menor: "<< Min3(a,b,c) << endl;
    cout << "Intermedio: " << Intemedio(a,b,c)<< endl;

    return 0;

}

// Declaración 

void DividirCifras(const string numero, int& anum, int& bnum, int& cnum) { //Se pide una cadena al usuario STRING, luego se utilizara numeros enteros anum,bnum,cnum

    anum = stoi (numero.substr(0,4)); //stoi para convertir STRING en INT necesario para compararlos luego
    bnum = stoi (numero.substr(4,4)); //substr para substraer cierta cantidad de cifras ---> numero.substr(posicion, numero de cifras a extraer)
    cnum = stoi (numero.substr(8,4));


    cout << "P es: " << anum << endl; 
    cout << "R es: " << bnum << endl;
    cout << "C es: " << cnum << endl;

}

int Max3(int anum, int bnum, int cnum) {

    int mayor = (anum>bnum && anum>cnum) ? anum : (bnum>anum && bnum>cnum) ? bnum : (cnum>bnum && cnum>anum) ? cnum : 0;

    return mayor;
}

int Min3(int anum, int bnum, int cnum) {

    int menor = (anum<bnum && anum<cnum) ? anum : (bnum<anum && bnum<cnum) ? bnum : (cnum<bnum && cnum<anum) ? cnum : 0;

    return menor;

}

int Intemedio(int anum, int bnum, int cnum) {


    int mayor = Max3(anum,bnum,cnum);
    int menor = Min3(anum,bnum,cnum);
    int Intermedio = anum+bnum+cnum-mayor-menor;

    return Intermedio;
}