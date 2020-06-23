#include <iostream>

using namespace std;

int contarOcurrencias(int arreglo[], int n, int numero) {
    int numOcurrencias = 0;
    for (int i = 0; i < n; i++) {
        if (arreglo[i] == numero) {
            numOcurrencias++;
        } else {}
    }
    return numOcurrencias;
}

int main() {
    int arreglo[12] = {1,3,3,3,4,5,6,3,3,2,1,3};
    int n;
    cout<<"ingrese el numero a comparar: ";
    cin>>n;
    cout<<"el numero de ocurrencias del numero "<<n<<" es: "<<contarOcurrencias(arreglo,12,n);
}