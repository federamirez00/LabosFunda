#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    int numero1, numero2;
    cout<<"Ingrese un numero entero: "<<endl;
    cin>>numero1;
    cout<<"Ingrese otro numero entero: "<<endl;
    cin>>numero2;
    if (numero1%numero2 == 0) {
        cout<<"Los numeros son divisibles entre si, con residuo 0"<<endl;
    } else {
        cout<<"Los numeros no son divisibles entre si"<<endl;
    }
}