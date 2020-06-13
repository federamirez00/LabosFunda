#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, raiz_a, raiz_c, cond;
    cout<<"Ingrese un numero entero: ";
    cin>>a>>b>>c;
    cond = 2*sqrt(a)*sqrt(c);
    raiz_a = sqrt(a);
    raiz_c = sqrt(c);
    cout<<raiz_a<<" "<<raiz_c<<" "<<cond<<endl;
    if (cond == b) {
        cout<<"Si";
    } else{
        cout<<"No";
    }
}