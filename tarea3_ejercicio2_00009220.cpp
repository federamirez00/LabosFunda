#include <iostream>
using namespace std;
int main()
{
    float radio, perimetro, area;
    cout << "Ingrese el radio del circulo: "<<endl;
    cin >> radio;
    perimetro = (2*3.141592)*radio;
    area = (radio*radio)*3.141592;
    cout << "El perimetro del circulo es: "<<perimetro<<endl;
    cout << "El area del circulo es: "<<area<<endl;
}