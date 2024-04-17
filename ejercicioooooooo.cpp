#include <iostream>

using namespace std;
    
    int base2Nombre(char nombre);
    int base3Apellido(char apellido);
    int base2edad(int edad); //16 a 30 anios
    int base4nacimiento(int nacimiento); //2000 al 2010
    
    //tomar en cuenta solo dos decimales
    int base6Estatura(float estatura); 
    int base5Peso(float peso);
    

int main () {
    
    char nombre;
    char apellido;
    int edad, nacimiento;
    float estatura, peso;
    
    cout << "Ingrese la primer letra del nombre: " << endl;
    cin >> nombre;
    cout << "Ingrese la primer letra del apellido: " << endl;
    cin >> apellido;
    cout << "Ingrese la edad: " << endl;
    cin >> edad;
    cout << "Ingrese el anio de nacimiento: " << endl;
    cin >> nacimiento;
    cout << "Ingrese el peso en kilogramos: " << endl;
    cin >> peso;
    cout << "Ingrese la estatura en metros: " << endl;
    cin >> estatura;
    
    cout << "DATOS ENCRIPTADOS" << endl;
    cout << "********************"<< endl;
    cout << base2Nombre(nombre) << " " << base3Apellido(apellido) << " " << base2edad(edad) << " " << base4nacimiento(nacimiento) << " " << base5Peso(peso) << " " << base6Estatura(estatura) << endl;
    
}

    int base2Nombre(char nombre){
        
        int ConvertNombre = (int)nombre;
        
        //Convertir a base 2
        
        int dn1, dn2, dn3, dn4, dn5, dn6, dn7;
        int r1, r2, r3,r4,r5, r6, r7;
        int n1,n2,n3,n4,n5, n6, n7;
        int all;
        
        dn1 = ConvertNombre/2;
        dn2 = dn1/2;
        dn3 = dn2/2;
        dn4 = dn3/2;
        dn5 = dn4/2;
        dn6 = dn5/2;
        dn7 = dn6/2;

        r1 = ConvertNombre%2;
        r2 = dn1%2;
        r3 = dn2%2;
        r4 = dn3%2;
        r5 = dn4%2;
        r6 = dn5%2;
        r7 = dn6%2;
        
        n1 = r1;
        n2 = r2 * 10;
        n3 = r3 * 100;
        n4 = r4 * 1000;
        n5 = r5 * 10000;
        n6 = r6 * 100000;
        n7 = r7 * 1000000;
        
        all = n1 + n2 + n3 + n4 + n5 + n6 + n7;
        
        return all;
        
        
    }
    int base3Apellido(char apellido) {
        
     int ConvertApellido = (int) apellido;
        
        //Convertir a base 3
        
        int dn1, dn2, dn3, dn4, dn5, dn6, dn7;
        int r1, r2, r3,r4,r5, r6, r7;
        int n1,n2,n3,n4,n5, n6, n7;
        int all;
        
        dn1 = ConvertApellido/3;
            
        dn2 = dn1/3;
        dn3 = dn2/3;
        dn4 = dn3/3;
        dn5 = dn4/3;
        dn6 = dn5/3;
        dn7 = dn6/3;

        r1 = ConvertApellido%3;
        r2 = dn1%3;
        r3 = dn2%3;
        r4 = dn3%3;
        r5 = dn4%3;
        r6 = dn5%3;
        r7 = dn6%3;
        
        n1 = r1;
        n2 = r2 * 10;
        n3 = r3 * 100;
        n4 = r4 * 1000;
        n5 = r5 * 10000;
        n6 = r6 * 100000;
        n7 = r7 * 1000000;
        
        all = n1 + n2 + n3 + n4 + n5 + n6 + n7;
        
        return all;
    }
    
    
    int base2edad(int edad){
        
        //Convertir a base 2
        
        int dn1, dn2, dn3, dn4, dn5, dn6, dn7;
        int r1, r2, r3,r4,r5, r6, r7;
        int n1,n2,n3,n4,n5, n6, n7;
        int all;
        
        dn1 = edad/2;
            
        dn2 = dn1/2;
        dn3 = dn2/2;
        dn4 = dn3/2;
        dn5 = dn4/2;
        dn6 = dn5/2;
        dn7 = dn6/2;

        r1 = edad%2;
        r2 = dn1%2;
        r3 = dn2%2;
        r4 = dn3%2;
        r5 = dn4%2;
        r6 = dn5%2;
        r7 = dn6%2;
        
        n1 = r1;
        n2 = r2 * 10;
        n3 = r3 * 100;
        n4 = r4 * 1000;
        n5 = r5 * 10000;
        n6 = r6 * 100000;
        n7 = r7 * 1000000;
        
        all = n1 + n2 + n3 + n4 + n5 + n6 + n7;
        return (edad>=16 && edad <= 31) ? all : 0;
        
    }
    
    int base4nacimiento(int nacimiento) {
        
        //Convertir a base 4
        
        int dn1, dn2, dn3, dn4, dn5, dn6, dn7;
        int r1, r2, r3,r4,r5, r6, r7;
        int n1,n2,n3,n4,n5, n6, n7;
        int all;
        
        dn1 = nacimiento/4;
            
        dn2 = dn1/4;
        dn3 = dn2/4;
        dn4 = dn3/4;
        dn5 = dn4/4;
        dn6 = dn5/4;
        dn7 = dn6/4;

        r1 = nacimiento%4;
        r2 = dn1%4;
        r3 = dn2%4;
        r4 = dn3%4;
        r5 = dn4%4;
        r6 = dn5%4;
        r7 = dn6%4;  
        
        n1 = r1;
        n2 = r2 * 10;
        n3 = r3 * 100;
        n4 = r4 * 1000;
        n5 = r5 * 10000;
        n6 = r6 * 100000;
        n7 = r7 * 1000000;;
        
        all = n1 + n2 + n3 + n4 + n5 + n6 + n7;
        return (nacimiento>=2000 && nacimiento <= 2010) ? all : 0;
        
    }
    int  base5Peso(float peso) {
    
    int Entero = peso * 100;
    int decimalPeso = Entero%100; 
        
    //Convertir a base 5
        
        int dn1, dn2, dn3, dn4, dn5, dn6, dn7;
        int r1, r2, r3,r4,r5, r6, r7;
        int n1,n2,n3,n4,n5, n6, n7;
        int all;
        
        dn1 = decimalPeso/5;
        dn2 = dn1/5;
        dn3 = dn2/5;
        dn4 = dn3/5;
        dn5 = dn4/5;
        dn6 = dn5/5;
        dn7 = dn6/5;

        r1 = decimalPeso%5;
        r2 = dn1%5;
        r3 = dn2%5;
        r4 = dn3%5;
        r5 = dn4%5;
        r6 = dn5%5;
        r7 = dn6%5;
        
        n1 = r1;
        n2 = r2 * 10;
        n3 = r3 * 100;
        n4 = r4 * 1000;
        n5 = r5 * 10000;
        n6 = r6 * 100000;
        n7 = r7 * 1000000;
        
        all = n1 + n2 + n3 + n4 + n5 + n6 + n7;
        return all;
        
    }
    int base6Estatura(float estatura) {
    
    int Entero = estatura * 100;
    int decimalEstatura = Entero % 100; 
        
    //Convertir a base 6
        
        int dn1, dn2, dn3, dn4, dn5, dn6, dn7;
        int r1, r2, r3,r4,r5, r6, r7;
        int n1,n2,n3,n4,n5, n6, n7;
        int all;
        
        dn1 = decimalEstatura/6;
        dn2 = dn1/6;
        dn3 = dn2/6;
        dn4 = dn3/6;
        dn5 = dn4/6;
        dn6 = dn5/6;
        dn7 = dn6/6;

        r1 = decimalEstatura%6;
        r2 = dn1%6;
        r3 = dn2%6;
        r4 = dn3%6;
        r5 = dn4%6;
        r6 = dn5%6;
        r7 = dn6%6;
        
        n1 = r1;
        n2 = r2 * 10;
        n3 = r3 * 100;
        n4 = r4 * 1000;
        n5 = r5 * 10000;
        n6 = r6 * 100000;
        n7 = r7 * 1000000;
        
        all = n1 + n2 + n3 + n4 + n5 + n6 + n7;
        return all;
        
    }