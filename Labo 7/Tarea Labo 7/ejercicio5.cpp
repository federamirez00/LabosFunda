#include <iostream>

using namespace std;

// Función para determinar los números impares, recibe n, i
int numerosImpares(int n, int i)
{
    // Arreglo para almacenar los 100 números impares
    int numeros[100];
    // While
    cout<<"100 numeros impares de mayor a menor"<<endl;
    while (i >= 0)
    {
        // Si el número es impar, que se llene el arreglo
        if (i % 2 != 0)
        {
            numeros[n] = i;
            cout<<numeros[n]<<endl;
            n = n + 1;
        }
        i = i - 1;
    }
}

int main()
{
    // Variable n sirve como contador y variable i como generador de números
    int n = 0, i = 200;
    numerosImpares(n, i);
}