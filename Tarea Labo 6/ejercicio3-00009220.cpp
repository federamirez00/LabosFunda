#include <iostream>

using namespace std;

// Función para determinar si el año es bisiesto o si no es
int anioBisiesto(int anio)
{
    // Condición para calcular si el año es bisiesto
    if (anio%400 == 0 || anio%4 == 0 && anio%100 != 0) {
        // Retorna valor true
        return true;
    } else {
        // En caso contrario, retorna valor false
        return false;
    }
    
}

int main()
{
    // Declaración de variables
    int anio;
    // Ingreso y asignación de variables
    cout<<"Definir a\244o bisiesto"<<endl;
    cin>>anio;
    // Mandamos a llamar a la función con el parámetro que recibe
    cout<<"Valor: "<<anioBisiesto(anio);
}