#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/* Función encargada de calcular la media de las estaturas. Recibe 
como parámetros el arreglo que almacena los valores de las esturas. */
float calculoMedia(float estaturas[]) {
    // Variable f utilizada como contador
    int f;
    float suma;
    for (f = 0; f < 25; f++) {
        suma = estaturas[f] + suma;
    }
    float media = suma/25;
    // Retornamos el valor de la media
    return media;
}

/* Función encargada de determinar si las estaturas son menores o mayores a la media.
Recibe como parámetros el arreglo estaturas y el valor de la media. */
void determinarEstaturas(float estaturas[], float media) {
    int f, mayor = 0, menor = 0;
    for (f = 0; f < 25; f++) {
        if (estaturas[f] > media) { // Si el valor del arreglo en la posición f es mayor a la media se suma 1 a la cuenta
            mayor++;
        } else if (estaturas[f] < media) { // Si el valor del arreglo en la posición f es menor a la media se suma 1 a la cuenta
            menor++;
        }
    }
    // Impresión de resultados
    cout<<"Las estaturas mayores a la media son "<<mayor<<endl;
    cout<<"Las estaturas menores a la media son "<<menor<<endl;
}

int main() {
    // La variable f sirve como contador, la variable i sirve como indicador de posición
    int f, i = 1;
    /* El arreglo estarturas almacena todos los valores de las estaturas.
    La variable suma almacena la suma de todas las estaturas */
    float estaturas[25], media;
    for (f = 0; f < 25; f++) {
        cout<<"Ingrese la estatura del alumno "<<i<<" en metros: "<<endl;
        cin>>estaturas[f];
        i++;
    }
    // Asignamos el valor que retorna la función calculoMedia a la variable media
    media = calculoMedia(estaturas);
    cout<<"El promedio de las estaturas es: "<< fixed << setprecision(2) << media<<" m"<<endl;
    // Llamamos a la función determinarEstaturas, y enviamos los parámetros estaturas[] y media
    determinarEstaturas(estaturas, media);
}