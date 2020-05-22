#include <iostream>

using namespace std;

int main()
{
    int numero1, numero2;
    cout<<"Ingrese un numero entero: ";
    cin>>numero1;
    cout<<"Ingrese otro numero entero: ";
    cin>>numero2;
    if (numero1%numero2 == 0) {
        cout<<"Los numeros son divisibles entre si con residuo 0";
    } else {
        cout<<"Los numeros no son divisibles entre si";
    }
}