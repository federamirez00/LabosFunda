#include <iostream>

using namespace std;

string imprimirMensaje() {
    return "Esta funcion imprimir mensaje ha escrito esto";
}

int retornarValor() {
    int acum = 0;
    for (int i = 1; i<=10; i++) {
        acum+=i;
    }
    return acum;
}

int main()
{
    //string mensaje = imprimirMensaje();
    int suma = retornarValor();
    cout<<suma<<endl;
}