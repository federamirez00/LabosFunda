#include <iostream>

using namespace std;

// Constante utilizada para la longitud de la variable char nombreArticul
const int longCad = 20;

struct costoPorArticulo
{
    // Campos de la estructura costoPorArticulo

    // Campo de tipo char con longitud 21, utilizado para almacenar el nombre del artículo
    char nombreArticul[longCad + 1];

    // Campo de tipo int utilizado para almacenar la cantidad por artículo
    int cantidad;
    // Campo de tipo float utilizado para almacenar el precio del artículo
    float precio;
    // Campo de tipo float utilizado para almacenar el costo por artículo
    float costoArticulo;
};

/* Función encargada de almacenar los datos sobre el producto. 
Recibe como parámetros la cantidad de artículos y los campos de la estructura que se utilizarán por medio del arreglo */
void leerInformacion(int cantidadArt, struct costoPorArticulo datos[])
{
    for (int f = 0; f < cantidadArt; f++) {
        /* Se solicita al usuario ingresar los datos correspondientes al artículo.
        Se almacenan en la posición f del arreglo, en la estructura y el campo correspondiente */
        // Solicitando y almacenando nombre del artículo
        cout<<"Ingrese el articulo "<<f + 1<<": "<<endl;
        cin>>datos[f].nombreArticul;
        // Solicitando y almacenando cantidad
        cout<<"Cantidad del articulo: "<<endl;
        cin>>datos[f].cantidad;
        // Solicitando y almacenando precio
        cout<<"Ingrese el precio: "<<endl;
        cin>>datos[f].precio;
    }
}

/* Función encargada de calcular los costos por cada artículo ingresado. 
Recibe como parámetros la cantidad de artículos y los campos de la estructura que se utilizarán por medio del arreglo */
void calcularSubtotal(int cantidadArt, struct costoPorArticulo datos[])
{
    // Se recorre el arreglo para obtener los valores individuales
    for (int f = 0; f < cantidadArt; f++)
    {
        // Se calcula y se almacena el costo por cada artículo. Se calcula con multiplicar la cantidad por el precio.
        datos[f].costoArticulo = datos[f].cantidad*datos[f].precio;
    }
}

/* Función encargada de imprimir los datos ingresados y obtenidos de cada artículo. 
Recibe como parámetros la cantidad de artículos y los campos de la estructura que se utilizarán por medio del arreglo */
void imprimirFactura(int cantidadArt, struct costoPorArticulo datos[])
{
    // Impresión de datos
    // Formato de encabezado de factura para dar realce al proyecto
    cout<<"-----------------------------------------"<<endl;
    cout<<"|                FACTURA                |"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"|#"<<"  | Prod. |"<<" Cant. |"<<" Precio |"<<" Subtotal |"<<endl;
    cout<<"-----------------------------------------"<<endl;
    // Se recorren las posiciones del arreglo para imprimir individualmente la información de los artículos
    for (int f = 0; f < cantidadArt; f++)
    {
        // Se imprimen los datos almacenados en la posición f y los campos de la estructura
        cout<<"|"<<f + 1<<". | "<<datos[f].nombreArticul<<" |   "<<datos[f].cantidad<<"   |  $"<<datos[f].precio<<" |   $"<<datos[f].costoArticulo<<"  |"<<endl;
        cout<<"-----------------------------------------"<<endl;
    }
    
}

/* Función encargada de calcular el total de todos los productos comprados. 
Recibe como parámetros la cantidad de artículos y los campos de la estructura que se utilizarán por medio del arreglo */
float calcularTotal(int cantidadArt, struct costoPorArticulo datos[])
{
    // Declarando variable para almacenar el total de la compra
    float total = 0;
    // Recorriendo el arreglo para realizar la suma de cada sub total
    for (int f = 0; f < cantidadArt; f++)
    {
        total += datos[f].costoArticulo;
    }
    // Retornando el total de la compra para ser impreso en la función main()
    return total;
}

/* Función main, encargada de declarar la cantidad de articulos que se ingresarán y 
de declarar el arreglo en el cual se almacenarán y se manejarán los datos de los productos. */
int main()
{
    // Variable que almacena la cantidad de productos a facturar
    int cantidadArt;
    cout<<"Ingrese la cantidad de articulos: ";
    cin>>cantidadArt;
    // Arreglo que almacena los datos de los artículos por medio de los campos de la estructura
    struct costoPorArticulo datos[cantidadArt];
    // Llamando funciones a ejecutar. Todas reciben la cantidad de artículos y el arreglo
    leerInformacion(cantidadArt, datos);
    calcularSubtotal(cantidadArt, datos);
    imprimirFactura(cantidadArt, datos);
    calcularTotal(cantidadArt, datos);
    // Variable que almacena el valor que retorna la función calcularTotal()
    float totalCompra = calcularTotal(cantidadArt, datos);
    // Impresión de total con formato de factura para dar realce
    cout<<"|                        TOTAL: $"<<totalCompra<<"  |"<<endl;
    cout<<"-----------------------------------------"<<endl;
    cout<<"|         Gracias por su compra         |"<<endl;
    cout<<"-----------------------------------------"<<endl;
}

