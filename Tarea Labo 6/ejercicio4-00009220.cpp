#include <iostream>

using namespace std;

// Función utilizada para calcular el día siguiente
int calcularDia(int dia, int mes, int anio)
{
    // Condición utilizada para válidar los valores para día y mes
    if (dia >= 1 && dia <= 31 && mes >= 01 && mes <= 12) {
        // Condición utilizada para validar el año
        if (anio >= 01) {
            cout << "La fecha ingresada es: " << dia << "/" << mes << "/" << anio << endl;
            // Condición para válidar los meses que tiene 31 días
            if (mes == 01 || mes == 03 || mes == 05 || mes == 07 || mes == 8 || mes == 10 || mes == 12 && dia >= 01 && dia <= 31) {
                // Condición para operar el 31 de diciembre
                if (dia == 31 && mes == 12) {
                    dia = 01;
                    mes = 01;
                    anio = anio + 1;
                // Condición para operar el 31 de cada mes (excepto diciembre)
                } else if (dia == 31) {
                    dia = 01;
                    mes = mes + 1;
                // Operación para el resto de días
                } else {
                    dia = dia + 1;
                    mes = mes;
                    anio = anio;
                }
            // Condición para válidar los meses que tienen 30 días
            } else if (mes == 04 || mes == 06 || mes == 9 || mes == 11 && dia >= 01 && dia <= 30) {
                // Condición para operar el 30 de cada mes
                if (dia == 30) {
                    dia = 01;
                    mes = mes + 1;
                // Condición para operar el resto de días
                } else {
                    dia = dia + 1;
                    mes = mes;
                    anio = anio;
                }
            }
            // Condición para válidar febrero en año bisiesto
            else if (mes == 02 && anio % 4 == 0 && anio % 100 != 0 && dia >= 01 && dia <= 29) {
                // Condición para operar con el 29 de febrero en año bisiesto
                if (dia == 29) {
                    dia = 01;
                    mes = mes + 1;
                // Condición para operar el resto de días
                } else {
                    dia = dia + 1;
                    mes = mes;
                    anio = anio;
                }
            }
            // Condición para válidar febrero en año no bisiesto
            else if (mes == 02 && anio % 4 != 0 && anio % 100 >= 0 && dia >= 01 && dia <= 28) {
                // Condición para operar con el 28 de febrero en año no bisiesto
                if (dia == 28) {
                    dia = 01;
                    mes = mes + 1;
                // Condición para operar el resto de días
                } else {
                    dia = dia + 1;
                    mes = mes;
                    anio = anio;
                }
            }
            // Condición para válidar datos correctos si el dato de febrero es correcto en año no es bisiesto
            if (dia == 29 && mes == 02 && anio%400 == 0 || anio%4 == 0 && anio%100 != 0) {
                cout << "La fecha calculada es: " << dia << "/" << mes << "/" << anio << endl;
            // Caso contrario dará un mensaje de error
            } else {
                cout << "El a\244o que ingreso, no es bisiesto. Por tanto no existe el 29 del 02." << endl;
            }
        }
    // Mensaje de error en caso no se ingrese un valor para dia y/o mes
    } else {
        cout << "Ingrese valores de dia y mes validos. Para dia entre 01 y 31. Para mes entre 01 y 12. Intente nuevamente" << endl;
    }
}

int main()
{
    // Declaración de variables
    int dia, mes, anio, fecha;
    cout << "Calculador de fechas" << endl;
    cout << "Ingrese el valor del dia: " << endl;
    // Almacenamiento de variables
    cin >> dia;
    cout << "Ingrese el valor del mes: " << endl;
    cin >> mes;
    cout << "Ingrese el valor del a\244o: " << endl;
    cin >> anio;
    // Mandamos a llamar a la función con los parámetros que recibe
    calcularDia(dia, mes, anio);
}
