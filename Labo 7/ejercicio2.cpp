#include <iostream>

using namespace std;
//int* arreglo
float promedio(float arreglo[], int n) {
    float acum = 0;
    for (int i = 0; i < n; i++) {
        acum+= arreglo[i];
    }
    float prom = acum / n;
    return prom;
}

int main ()
{
    int n; //Cant elementos
    cout<<"Ingrese la cantidad de elementos: ";
    cin>>n;
    float arreglo[n];
    for (int i = 0; i < n; i++) {
        cout<<"Ingrese el valor en la posicion "<<i<<": ";
        cin>>arreglo[i];
    }
    for (int i = 0; i < n; i++) {
        cout<<arreglo[i]<<"\n";
    }
    cout<<endl;
    cout<<"El promedio del arreglo es: "<<promedio(arreglo, n)<<endl;
}