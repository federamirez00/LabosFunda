#include <iostream>
int calcularMCD(int);

using namespace std;

// Función utilizada para calcular MCD
int calcularMCD(int nummayor, int nummenor, int residuo)
{
    // Estructura utilizada para realizar operaciones mientras el residuo sea diferente de 0
    do {
        // Para obtener el residuo se realiza módulo entre el numero mayor y el menor
        residuo = nummayor%nummenor;
        if (residuo != 0) {
            // Se asigna nuevos valores a los parámetros
            nummayor = nummenor;
            nummenor = residuo;
        }
    } while (residuo != 0);
    cout<<"El MCD es: "<<nummenor<<endl;
}

int main ()
{
    // Declaración de variables
    int nummayor, nummenor, residuo;
    cout<<"Calcular el MCD"<<endl;
    // Ingreso y asignación de variables
    cout<<"Ingrese el numero mayor: "<<endl;
    cin>>nummayor;
    cout<<"Ingrese el numero menor: "<<endl;
    cin>>nummenor;
    // Se manda a llamar la función con los parámetros que recibe
    calcularMCD(nummayor, nummenor, residuo);
}

