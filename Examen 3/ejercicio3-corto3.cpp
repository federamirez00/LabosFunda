#include <iostream>

using namespace std;

//Función para determinar si el año es bisiesto o no
int calculadoraBisiestos(int anio)
{
    /*Condicional if para determinar si el año es bisiesto por medio del modulo*/
    if (anio % 400 == 0 || anio % 4 == 0 && anio % 100 != 0) { // Si el año cumple alguna de las dos condiciones, es bisiesto
        cout<<"El a\244o "<<anio<<" es bisiesto."<<endl; // Mensaje de éxito
    } else { // Si el año no cumple
        cout<<"El a\244o "<<anio<<" no es bisiesto."<<endl; // Mensaje de fallo
    }
}

int main()
{
    //Declarando varialble para el año bisiesto
    int anio;
    //Ingreso del valor del año
    cout<<"Ingrese el a\244o: ";
    cin>>anio;
    //Se manda a llamar a la función para calcular si es año bisiesto o no
    calculadoraBisiestos(anio);
}