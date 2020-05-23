#include <iostream>

using namespace std;

int main() {
    int numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    if (numero > 0) {
        cout<<"El numero es positivo";
    } else if (numero < 0) {
        cout<<"El numero es negativo";
    } else { //ya no es necesario poner condicional ya que un número solo puede ser postivo, negativo o cero
        cout<<"El numero es cero";
    }
}