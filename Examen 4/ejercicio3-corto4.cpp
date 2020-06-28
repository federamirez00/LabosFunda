#include <iostream>

using namespace std;

void calcularPromedio(int cantidad, float notas[][5])
{
    //int i = 1;
    for (int c = 0; c < cantidad; c++) {
        float promedio = 0;
        for (int f = 0; f < 5; f++) {
            promedio += notas[c][f]*0.20;
        }
        if (promedio >= 6) {
            cout<<"El alumno con nota final "<<promedio<<" ha aprobado."<<endl;
        } else {
            cout<<"EL alumno con nota final "<<promedio<<" ha reprobado."<<endl;
        }
        //i++;
    }
}

void llenarMatriz(int cantidad, float notas[][5])
{
    //int n = 1, i = 1;
    for (int c = 0; c < cantidad; c++)
    {
        //cout<<"Notas del alumno "<<n<<endl;
        for (int f = 0; f < 5; f++)
        {
            float nota;
            cout<<"Ingrese la nota: "<<endl;
            cin>>nota;
            if (nota >= 0 && nota <= 10) {
                notas[c][f] = nota;
            }
            //i++;
            /*if (i > 5) {
                i = 1;
            }*/
        }
        //n++;
    }
    calcularPromedio(cantidad, notas);
}

int main()
{
    int alumnos;
    cout<<"Ingrese el número de alumnos: "<<endl;
    cin>>alumnos;
    float notas[alumnos][5];
    llenarMatriz(alumnos, notas);
    return 0;
}