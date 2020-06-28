#include <iostream>

using namespace std;

// Función encargada de calcular los promedios de cada estudiante.
// Recibe como parámetros la cantidad de alumnos y la matriz.
void calcularPromedio(int cantidad, float notas[][5])
{
    int i = 1;
    for (int c = 0; c < cantidad; c++) {
        float promedio = 0;
        for (int f = 0; f < 5; f++) {
            // Obtener el promedio por medio de los valores en la fila c y columna f
            promedio += notas[c][f]*0.20;
        }
        // Si el promedio es mayor a 6, el alumno ha reprobado
        if (promedio >= 6) {
            cout<<"El alumno con nota final "<<promedio<<" ha aprobado."<<endl;
        } else {
            cout<<"EL alumno con nota final "<<promedio<<" ha reprobado."<<endl;
        }
        i++;
    }
}

// Función encargada de llenar la matriz
// Recibe como parámetros la cantidad de alumnos y la matriz declarada en la función main()
void llenarMatriz(int cantidad, float notas[][5])
{
    // Variable n funciona como contador de estudiantes, variable i como contador de notas
    int n = 1, i = 1;
    for (int c = 0; c < cantidad; c++)
    {
        //cout<<"Notas del alumno "<<n<<endl;
        for (int f = 0; f < 5; f++)
        {
            float nota;
            cout<<"Ingrese la nota: "<<endl;
            cin>>nota;
            if (nota >= 0 && nota <= 10) {
                // Ingresamos el valor en la fila c y columna f
                notas[c][f] = nota;
            }
            i++;
            // Reiniciar el valor de i a 1 cuando sea mayor a 5
            if (i > 5) {
                i = 1;
            }
        }
        n++;
    }
    // LLamamos a la función que calcula el promedio de las notas de cada estudiante
    calcularPromedio(cantidad, notas);
}

int main()
{
    // Variable que determina la cantidad de alumnos
    int alumnos;
    cout<<"Ingrese el numero de alumnos: "<<endl;
    cin>>alumnos;
    // Matriz o arreglo bidimensional que almacenará las notas de los alumnos
    // obtetiene n datos multiplicados por 5.
    float notas[alumnos][5];
    // Llamamos a la función que llena la matriz
    llenarMatriz(alumnos, notas);
    return 0;
}