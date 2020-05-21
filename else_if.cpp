#include <iostream>

using namespace std;

int main() 
{
    float numero;
    cout<<"Ingrese el numero: ";
    cin>>numero;
    if (numero>0) {
        cout<<"El numero es positivo";
    } else if (numero<0) {
        cout<<"El numero es negativo";
    } else {
        cout<<"El numero es cero";
    }
}