#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/* Función encargada de calcular la media de las estaturas. Recibe 
como parámetros el arreglo que almacena los valores de las esturas. */
int calculoMedia(float estaturas[]) {
    // Variable utilizada como contador
    int f;
    float suma, media;
    for (f = 0; f < 25; f++) {
        suma = estaturas[f] + suma;
    }
    media = suma/25;
    cout<<"La media de las estaturas es: "<< fixed <<  setprecision(2) <<media<<" m"<<endl;
}

int determinarEstatura(float estaturas[], float media) {
    int f, mayor = 0, menor = 0;
    for (f = 0; f < 25; f++) {
        if (estaturas[f] > media) { // Si el valor del arreglo en la posición f es mayor a la media se suma 1 a la cuenta
            mayor++;
        } else if (estaturas[f] < media) { // Si el valor del arreglo en la posición f es menor a la media se suma 1 a la cuenta
            menor++;
        }
    }
    // Impresión de resultado
    cout<<"Las estaturas mayores a la media son "<<mayor<<endl;
    cout<<"Las estaturas menores a la media son "<<menor<<endl;
}

int main() {
    // La variable f sirve como contador, la variable i sirve como indicador de posición
    int f, i = 1;
    /* El arreglo estarturas almacena todos los valores de las estaturas.
    La variable suma almacena la suma de todas las estaturas */
    float estaturas[25], media;
    // Estructura for en donde se almacenan los valores
    for (f = 0; f < 25; f++) {
        cout<<"Ingrese la estatura "<<i<<" en metros: "<<endl;
        cin>>estaturas[f];
        i++;
    }
    // Llamando a la función calculoMedia y se envían los parámetros estaturas y suma
    calculoMedia(estaturas);
    determinarEstatura(estaturas, media);
}