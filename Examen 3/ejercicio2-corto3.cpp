#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int intentosNumero()
{
    /*Declaración de variables, f sirve como contador de intentos
    "numero" almacena el número ingresado por el usuario
    "f" sirve como contador de turnos y se inicia en 5
    "magico" determina el número mágico que el jugador tratará de adivinar*/
    int n, f = 5, numero, magico = rand() % 100 - 1;
    //construcción de ciclo do while
    do
    {
        cout << "Para jugar ingresa 1. Para finalizar ingresa 0." << endl; // Menú de inicio del juego
        cin >> n; // Almacenamos la selección 1 = jugar, 0 = salir
        if (n == 1) { // Si ingresó 1 entra a jugar
            cout << "Ingrese un número del 1 al 100: " << endl; // Se ingresa el numero
            cin >> numero;
            if (numero == magico) { // Si el número es igual al número mágico gana y se termina el juego 
                cout << "Felicidades, adivino el numero magico!!!" << endl;
                break; // Con la instrucción break, acabamos el ciclo
            } else if (numero < magico) { // Si el número es menor al número mágico
                cout << "El numero que ingreso es menor al numero magico" << "\n"; // Pista
                f--; // Restamos 1 turno
                cout << "Le restan " << f << " intentos." << "\n"; // Mensaje de turnos restantes
            } else if (numero > magico) { // Si el numero es mayor al numero secreto
                cout << "El numero que ingreso es mayor al numero magico" << "\n"; // Pista
                f--;
                cout << "Le restan " << f << " intentos." << "\n";
            }
        } else {
            break; // Se termina el ciclo 
        }
    } while (f >= 1 && n != 0); // Mientras los turnos sean mayores o igual a 1 y n diferente de 0
    cout << "El juego ha finalizado." << endl; // Mensaje de finalización
}

int main()
{
    cout << "¡Bienvenido a número magico!" << endl; // Mensaje de inicio
    intentosNumero(); // Llamamos a la función
}