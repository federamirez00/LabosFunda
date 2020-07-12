#include <iostream>

using namespace std;

const int longCad = 20;

struct costoPorArticulo
{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio; 
    float costoPorArticulo;
} Articulos;

int main()
{
    int cantidadArt;
    char nombreArticulo[longCad + 1];
    cout<<"Ingrese la cantidad de articulos: ";
    cin>>cantidadArt;
    leerInformacion(cantidadArt, nombreArticulo);
}

void leerInformacion(int cantidadArt, char nombreArticulo[])
{
    for (int f = 0; f < cantidadArt; f++) {
        costoPorArticulo Articulos, DatosArt;
        cout<<"Ingrese el nombre del articulo: ";
        cin>>Articulos.nombreArticul[longCad + 1];
        nombreArticulo[longCad + 1] = Articulos.nombreArticul[longCad + 1];
        cout<<"Ingrese la cantidad comprada del artículo: ";
        cin>>Articulos.cantidad;
        cout<<"Ingrese el precio del artículo: ";
        cin>>Articulos.precio;
    }
}