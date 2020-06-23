#include <iostream>

using namespace std;

int main ()
{
    int n; //Cant elementos
    cout<<"Ingrese la cantidad de elementos: ";
    cin>>n;
    int arreglo[n];
    for (int i = 0; i < n; i++) {
        cout<<"Ingrese el valor en la posicion "<<i<<": ";
        cin>>arreglo[i];
    }
    for (int f = 0; f < n; f++) {
        cout<<arreglo[f]<<"\n";
    }
}