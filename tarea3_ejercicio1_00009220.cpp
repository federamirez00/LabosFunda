#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3, promedio;
    cout << "Ingrese los tres numeros enteros que desea promediar: " << endl;
    cin >> num1 >> num2 >> num3;
    promedio = (num1+num2+num3)/3;
    cout << "El promedio de "<<num1<<", "<<num2<<" y "<<num3<<" es: "<<promedio;
} 