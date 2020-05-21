#include <iostream>

using namespace std;

int main()
{
    int num=-1;
    do {
        cout<<"Ingrese un numero que no sea -1: ";
        cin>>num;
    } while(num != -1);
    cout<<"Fin del programa";
}