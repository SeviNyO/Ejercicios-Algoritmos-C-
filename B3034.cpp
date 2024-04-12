#include <iostream>

using namespace std;

float Precios(char marca, char color, int gb);
float Descuento(float Precios);

int main () {

    char marca;
    char color;
    int gb;
    

    cout << "******************************" << endl;
    cout << endl;
    cout << "Marcas disponibles: " <<endl;
    cout << " - Samsung (S)" << "\n - Nokia (N)" << endl;
    cout << endl;
    cout << "******************************" << endl;
    cout << endl;
    cout << "Mas informacion" << endl;
    cout << " - Rojo (0) en 8gb y 16 gb" << endl;
    cout << " - Blanco (1) en 16 gb" << endl;
    cout << endl;
    cout << "******************************";

    cout << "\n Ingrese la marca que desea: " << endl;
    cin >> marca;

    cout << "Ingrese el color que desea: " << endl;
    cin >> color;

    cout << "Ingrese la cantidad de gb: " << endl;
    cin >> gb;

    float precio = Precios(marca,color,gb);

    cout << "El precio a pagar es de: " << precio << endl;

    return 0;
}

float Precios(char marca, char color, int gb) {
    
    int P1800 = (marca == 'N' && color == '0' && gb==8);
    int P2650 = (marca == 'N' && color == '0' && gb==16);
    int P2780 = (marca == 'N' && color == '1' && gb==16);
    int P1700 = (marca == 'S' && color == '0' && gb==8);
    int P2500 = (marca == 'S' && color == '0' && gb==16);
    int P2900 = (marca == 'S' && color == '1' && gb==16);

    return (P1800) ? 1800 : (P2650) ? 2650 : (P2780) ? 2780 : (P1700) ? 1700 : (P2500) ? 2500 : (P2900) ? 2726 : 0;

}