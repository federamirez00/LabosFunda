#include <iostream>
#include <math.h>

using namespace std;

int contarDigitos(int numero) {
    int digitos = 0;
    while (numero>0)
    {
        numero = numero/10;
        digitos++;
    }
    return digitos;
}

int invertirNumero(int numero) {
    int exponente = contarDigitos(numero)-1;
    int numeroInvertido = 0;
    while (numero>0) {
        int digitoActual = numero%10;
        double potencia = pow(10, exponente);
        numeroInvertido += digitoActual * potencia;
        numero = numero/10;
        exponente--;
    }
    return numeroInvertido;
}

int main()
{
    int numero;
    cout<<"Ingrese el numero: ";
    cin>>numero;
    cout<<"El numero invertido es: "<<invertirNumero(numero)<<endl;
}