#include <iostream>
#include <wchar.h>

using namespace std;

int main()
{
    string palabra, letra_inicial, letra_final;
    int i, longitud;
    cout<< "Ingrese una palabra: " << endl;
    cin >> palabra;
    //Obtenemos la longitud de la palabra 
    longitud = palabra.length();
    //Obtenemos la primera letra de la palabra
    letra_inicial = palabra[0];
    //Hacemos la resta para tener el valor de la última 
    i = longitud - 1; 
    //Se consigue el valor de la última de la palabra con la variable i
    letra_final = palabra[i]; 
    if (letra_inicial == letra_final) {
        cout <<"La palabra inicia y finaliza con la misma letra"<< endl;
    } else {
        cout<< "La palabra inicia y finaliza con diferente letra" << endl;
    }
}