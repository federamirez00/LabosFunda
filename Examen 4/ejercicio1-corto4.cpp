#include <iostream>

using namespace std;

// Función encargada de codificar el texto. Recibe como parámetro el texto ingresado.
void codificarTexto(char texto[]) {
    // For encargado de recorrer cada uno de los carácteres del texto
    for (int f = 0; f <= 100; f++) {
        // Switch utilizado para verificar si el caracter forma parte de la palabra murciélago
        switch (texto[f]) {
        /* En caso que el caracter se encuentre en la palabra murciélago, le asigne un valor
        de la tabla ASCII 48 - 57, equivalentes a 0 - 9*/
        case 'm':
            texto[f] = 48;
            break;
        case 'u':
            texto[f] = 49;
            break;
        case 'r':
            texto[f] = 50;
            break;
        case 'c':
            texto[f] = 51;
            break;
        case 'i':
            texto[f] = 52;
            break;
        case 'e':
            texto[f] = 53;
            break;
        case 'l':
            texto[f] = 54;
            break;
        case 'a':
            texto[f] = 55;
            break;
        case 'g':
            texto[f] = 56;
            break;
        case 'o':
            texto[f] = 57;
            break;
        default:
            texto[f] = texto[f];
        }
    }
    cout << "Texto codificado: " << texto;
}

int main() {
    char texto[100];
    cout << "Ingrese el texto a codificar:" << endl;
    cin.getline(texto, 100);
    codificarTexto(texto);
}