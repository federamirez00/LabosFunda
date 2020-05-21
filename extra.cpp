#include <iostream>

using namespace std;

int main()
{
    int numero;
    cout<<"Ingrese un numero: ";
    cin>>numero;
    if (numero>=100 && numero<=999) {
        cout<<"Es un numero de 3 digitos";
    } else {
        cout<<"No es un numero de 3 digitos";
    }
}