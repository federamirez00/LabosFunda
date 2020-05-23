#include <iostream>

using namespace std;

int main()
{
    string palabra;
    int longitud;
    cout<<"Ingrese la palabra: ";
    cin>>palabra;
    longitud = palabra.length();
    if (longitud > 10 && longitud%2 == 0) {
        cout<<"La longitud de la palabra es mayor a 10 caracteres y es par"<<endl;
    } else if (longitud <= 10 && longitud%2 == 0) {
        cout<<"La longitud de la palabra es menor o igual a 10 caracteres y es par"<<endl;
    } else if (longitud <= 10 && longitud%2 != 0) {
        cout<<"La longitud de la palabra es menor o igual a 10 caracteres y es impar"<<endl;
    } else if (longitud > 10 && longitud%2 != 0) {
        cout<<"La longitud de la palabra es mayor a 10 caracteres y es impar"<<endl;
    }
}