#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

char firstLetter(string palabra) {
    return palabra[0];
    
    }

int main() {
    string frase;
    cout << "Ingresa una cadena de texto: ";
    cin >> frase;
    cout << "***********************";
    cout << endl << firstLetter(frase);
    return 0;
}
