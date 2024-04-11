#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstdlib>

using namespace std;

void SustraCifras(const string& numero, int& anum, int& bnum, int& cnum){

    string a = numero.substr(0,4);
    string b = numero.substr(4,4);
    string c = numero.substr(8,4);

    anum = stoi(a);
    bnum = stoi(b);
    cnum = stoi(c);
}

int FindMayor(int anum, int bnum, int cnum) {

    int mayor = max({anum,bnum,cnum});
    return mayor;

}

int FindMenor(int anum, int bnum, int cnum) {

    int menor = min({anum,bnum,cnum});
    return menor;

}int FindIntermedio(int anum, int bnum, int cnum) {

   int mayor = FindMayor(anum,bnum,cnum);
   int menor = FindMenor(anum,bnum,cnum);
   int Intermedio = anum+bnum+cnum-mayor-menor;
    return Intermedio;
}

int main () {

    string cadena;

    cout << "Ingresa un numero de 12 cifras: ";
    cin >> cadena;

    int anum, bnum, cnum;
    SustraCifras(cadena,anum,bnum,cnum);

    cout << "Mayor: " << FindMayor(anum,bnum,cnum) << endl;
    cout << "Menor: " << FindMenor(anum,bnum,cnum) << endl;
    cout << "Intermedio: " << FindIntermedio(anum,bnum,cnum)<< endl;

    return 0;

}