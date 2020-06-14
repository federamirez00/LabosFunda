#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int salariosEmpleados(int f)
{  
    int i, cont, horas, extra;
    double salario, normales, salarioextra, descuento, salariototal;
    for (i=1; i<=f; i++) {
        cout << "Ingrese las horas trabajadas del empleado "<<i<<": " << endl;
        cin >> horas;
        cout << "Ingrese las horas extra trabajadas del empleado "<<i<<": " << endl;
        cin >> extra;
        normales = horas * 1.75;
        salarioextra = extra * 2.50;
        salario = normales + salarioextra;
        if (salario > 500) {
            descuento = (salario*0.04)+(salario*0.0625)+(salario*0.10);
            salariototal = salario-descuento;
        }
        else {
            descuento = (salario*0.04)+(salario*0.0625);
            salariototal = salario-descuento;
        }
        cout<<"El salario sin descuentos del empleado "<<i<< " es: $"<< fixed <<  setprecision(2) << salario<<"\n";
        cout<<"El salario con descuentos del empleado "<<i<< " es: $"<< fixed <<  setprecision(2) << salariototal<< endl;
    }
    cout<<"Fin del programa."<<endl;
}

int main()
{
    //Declaración de variable para determinar la cantidad de empleados 
    int f;
    cout<<"CALCULADORA DE SALARIOS"<<endl;
    cout<<"Ingrese la cantidad de salarios a calcular: ";
    cin>>f;
    salariosEmpleados(f);
}