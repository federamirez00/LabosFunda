#include <iostream>
#include <math.h>

using namespace std;

float promedio(float arreglo[], int n) {
    float acum = 0.0;
    for (int i = 0; i < n; i++) {
        acum+= arreglo[i];
    }
    return acum / n;
}

float sigma(float arreglo[], int n, float promedio) {
    float sumatoria = 0.0;
    for (int i = 0; i < n; i++) {
        float resta = arreglo[i] - promedio;
        sumatoria+= pow(resta, 2);
    }
    return sumatoria;
}

int main() {
    int n;
    cout<<"cuantas mediciones se realizaron?";
    cin>>n;
    float valores[n];
    for (int i=0;i<n;i++) {
        cout<<"Ingrese la medicion "<<i+1<<": ";
        cin>>valores[i];
    }
    float avg = promedio(valores, n);
    float coeficiente = 1 / (n-1);
    float incerteza = sqrt(coeficiente * sigma(valores, n, avg));
    cout<<"La incerteza es: "<<incerteza<<endl;
}