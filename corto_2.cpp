#include <iostream>
using namespace std;

int main(){
    int edad, sexo, P;
    int N1, N2, N3, N4, N5, N6;

    N1 = 90;
    N2 = 130;
    N3 = 900;
    N4 = 80;
    N5 = 110;
    N6 = 250;

    cout << "ingrese su edad actual" << endl;
    cin >> edad;

    if(edad <= 10){
         cout << " Tu talla es 8" << endl;

    } else if(edad > 10 && edad <= 15){
        cout << "Tu talla es 12" << endl;

    } else if(edad > 15 && edad <= 60){
        cout << "Tu talla es 16" << endl;

    } else {
        cout << "Tu talla es 18" << endl;
    }

    cout << "Que tipo de ropa busca?" << endl;
    cout << "1. Para hombre " << endl;
    cout << "2. Para mujer" << endl;
    cout << "3. Mostrar todo" << endl;
    cin >> sexo;

    switch(sexo){
        case 1:
        cout << "1. Camisa Casual: $90 (descuento del 30%)" << endl;
        cout << "2. Pantalón Formal: $130 (descuento del 30%)" << endl;
        cout << "3. Chaqueta Premium: $900 (descuento del 30%)" << endl;
            break;

        case 2:
        cout << "4. Blusa Moderna: $80 (descuento del 20%)" << endl;
        cout << "5. Falda Elegante: $110 (descuento del 20%)" << endl;
        cout << "6. Abrigo Premium: $250 (descuento del 20%)" << endl;
            break;

        case 3:
        cout << "Ropa de hombre:" << endl;
        cout << "1. Camisa Casual: $90 (descuento del 30%)" << endl;
        cout << "2. Pantalón Formal: $130 (descuento del 30%)" << endl;
        cout << "3. Chaqueta Premium: $900 (descuento del 30%)" << endl;
        cout << "Ropa de mujer:" << endl;
        cout << "4. Blusa Moderna: $80 (descuento del 20%)" << endl;
        cout << "5. Falda Elegante: $110 (descuento del 20%)" << endl;
        cout << "6. Abrigo Premium: $250 (descuento del 20%)" << endl;
            break;
        default:
        cout << "ingrese una opcion valida" << endl;
        break;

    }
    
    cout << "Su saldo actual es de $300" << endl;
    cout << "ingrese la opcion del producto deseado" << endl;
    cin >> P;

    switch(P){
        case 1:
        P = 300 - N1;
        cout << "La compra fue realizada con exito" << endl;
        cout << "Su saldo actual es de $" << P << endl;
            break;

        case 2:
        P = 300 - N2;
        cout << "La compra fue realizada con exito" << endl;
        cout << "Su saldo actual es de $" << P << endl;
            break;
        
        case 3:
        P = N3 - 300;
        cout << "No se puede realizar la compra. Saldo insuficiente" << endl;
        cout << "El saldo faltante es de $" << P << endl;
            break;

        case 4:
        P = 300 - N4;
        cout << "La compra fue realizada con exito" << endl;
        cout << "Su saldo actual es de $" << P << endl;
            break;

        case 5:
        P = 300 - N5;
        cout << "La compra fue realizada con exito" << endl;
        cout << "Su saldo actual es de $" << P << endl;
            break;

        default:
        P = 300 - N6;
        cout << "La compra fue realizada con exito" << endl;
        cout << "Su saldo actual es de $" << P << endl;
            break;

    }


    return 0;
}