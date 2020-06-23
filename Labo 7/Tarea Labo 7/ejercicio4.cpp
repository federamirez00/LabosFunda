#include <iostream>

using namespace std;

// Función para leer los datos de los arreglos
int leer(int cantidad, int arreglo[]) {
    for (int f = 0; f < cantidad; f++) {
        // Valores que se utilizarán para sumar
        int numero;
        cout<<"Ingrese un numero: "<<endl;
        cin>>numero;
        // Arreglo enviado a la función mostrarResultado
        arreglo[f] = numero;
    }
}

// Función encargada de sumar los valores
int sumar(int valores1[], int valores2[], int sumavalores[], int cantidad) {
    for (int f = 0; f < cantidad; f++) {
        sumavalores[f] = valores1[f] + valores2[f];
    }
}

// Función encargada de mostrar los resultados
int mostrarResultado(int arreglo[], int cantidad) {
    for (int f = 0; f < cantidad; f++) {
        cout<<"El resultado en la posicion "<<f<<" son: "<<arreglo[f]<<endl;
    }
}

int main() {
    // Contador de datos
    int n;
    cout<<"Ingrese la cantidad de datos: "<<endl;
    cin>>n;
    // Declaración de arreglo
    int valores1[n], valores2[n], sumavalores[n];
    cout<<"Estas ingresando los valores del primer arreglo"<<endl;
    leer(n, valores1);
    cout<<"Estas ingresando los valores del segundo arreglo"<<endl;
    leer(n, valores2);
    sumar(valores1, valores2, sumavalores, n);
    mostrarResultado(sumavalores, n);
}