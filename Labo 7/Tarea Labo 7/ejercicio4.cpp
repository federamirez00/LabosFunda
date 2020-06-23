#include <iostream>

using namespace std;

int leer(int cantidad, int arreglo[]) {
    for (int f = 0; f < cantidad; f++) {
        int numero;
        cout<<"Ingrese un numero: "<<endl;
        cin>>numero;
        arreglo[f] = numero;
    }
}

int sumar(int valores1[], int valores2[], int sumavalores[], int cantidad) {
    for (int f = 0; f < cantidad; f++) {
        sumavalores[f] = valores1[f] + valores2[f];
    }
}

int mostrarResultado(int arreglo[], int cantidad) {
    for (int f = 0; f < cantidad; f++) {
        cout<<"El resultado en la posicion "<<f<<" son: "<<arreglo[f]<<endl;
    }
}

int main() {
    int n;
    cout<<"Ingrese la cantidad de datos: "<<endl;
    cin>>n;
    int valores1[n], valores2[n], sumavalores[n];
    cout<<"Estas ingresando los valores del primer arreglo"<<endl;
    leer(n, valores1);
    cout<<"Estas ingresando los valores del segundo arreglo"<<endl;
    leer(n, valores2);
    sumar(valores1, valores2, sumavalores, n);
    mostrarResultado(sumavalores, n);
}