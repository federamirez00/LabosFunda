#include <iostream>

using namespace std;

int main()
{
    float compra;
    cout<<"Ingrese el total de la compra: ";
    cin>>compra;
    if (compra > 40) {
        compra-=(compra*0.3);
    }
    cout<<compra;
}