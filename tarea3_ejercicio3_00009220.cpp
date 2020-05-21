#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, c, x1, x2;
    cout<<"Ingrese los valores de a, b y c, separados por un espacio: "<<endl;
    cin>>a>>b>>c;
    float discriminante = pow(b, 2) - 4*a*c;
    if (discriminante>=0) {
        cout<<"Si tiene solucion real";
    } else {
        cout<<"No tiene solucion real";
    }
    /*
    x1 = (-b + (sqrt((pow(b, 2))-(4*a*c))))/(2*a);
    x2 = (-b - (sqrt((pow(b, 2))-(4*a*c))))/(2*a);
    cout<<"x1 = "<<x1<<" x2 = "<<x2<<endl;
    */
}