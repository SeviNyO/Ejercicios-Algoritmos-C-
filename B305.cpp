#include <iostream>

using namespace std;
using ll = long long int;

// Esta función recibe el código de barras del  producto y devuelve su precio. El precio se obtiene a partir de los últimos dos dígitos del  código de barras.
int ObtenerPrecio(ll codigo);

// Esta función recibe la  cantidad comprada de un producto y su precio, y devuelve el monto total a pagar.
int CalcularMonto(int cantidad, int precio);

//Esta función recibe el monto total a pagar y calcula el descuento obtenido, si aplica. Si el monto a pagar es mayor a 1500, se aplica un  descuento del 20%. Si el monto a pagar es mayor a 1000 y menor o igual a 1500, se aplica un  descuento del 10%. Si el monto a pagar es menor o igual a 1000, no se aplica ningún descuento.
float CalcularDescuento(int monto);

//Esta función recibe el código de barras, el precio del producto, el monto total a pagar,la cantidad comprada y el descuento obtenido (si aplica), y muestra en pantalla los resultados
void Imprimir(ll codigo, int precio, int monto, int cantida, float descuento);

int main () {

    int codigo;
    int cantidad;

    cout << "Ingresa el codigo del producto (11 digitos)" << endl;
    cin >> codigo;
    cout << "Ingrese la cantidad que desea" << endl;
    cin >> cantidad;

    int precio = ObtenerPrecio(codigo);
    int monto = CalcularMonto(cantidad, precio);
    float descuento = CalcularDescuento(monto);

    Imprimir(codigo,precio, monto,cantidad,descuento);

    return 0;
}

int ObtenerPrecio(ll codigo) {

    int precio = codigo%100;
    return precio;

}

int CalcularMonto(int cantidad, int precio) {

    int monto = cantidad * precio;

    return monto;
}

// DESCUENTO          x>1500 20%      x>1000 y x=<1500 10%        x=< 100 nada

float CalcularDescuento(int monto) {

    
    float desc20 = 0.2*monto;
    float desc10 = 0.1*monto;
    float sindesc = 0;

    float descuento = (monto>5000) ? desc20 : (monto>1000 && monto<=1500) ? desc10 : sindesc;

    return descuento;

}

void Imprimir(ll codigo, int precio, int monto, int cantida, float descuento) {

    cout << "Resultado: " << endl;
    cout << "Codigo de barras: " << codigo << endl;
    cout << "Precio del producto: " << precio << endl;
    cout << "Monto a pagar: " << monto << endl;
    cout << "Descuento obtenido: " << descuento << endl;
    cout << "Monto total: " <<  monto - descuento << endl;

}
