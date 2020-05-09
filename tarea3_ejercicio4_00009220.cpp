#include <iostream>
using namespace std;
int main()
{
    string nombre;
    float precio, total;
    int cantidad;
    cout << "Ingrese el nombre del producto, por favor: "<<endl;
    cin >> nombre;
    cout<<"Ingrese el precio del producto: "<<endl;
    cin >> precio;
    cout << "Ingrese la cantidad comprada: "<<endl;
    cin >> cantidad;
    total = precio*cantidad;
    cout << "El total por comprar "<<cantidad<<" "<<nombre<<" es: $"<<total;
}