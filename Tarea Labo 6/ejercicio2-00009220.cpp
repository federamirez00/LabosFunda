#include <iostream>
#include <ctime>
#include <chrono>

using namespace std;

int calcularHora(time_t actual) {
    // Variable utilizada para almacenar el tiempo local
    tm* horita = localtime(&actual);
    // Condición para operar cuando los segundos son iguales a 59
    if (horita->tm_sec == 59) {
        horita->tm_sec = 00;
    }
    // Condición para operar cuando los minutos son iguales a 59
    if (horita->tm_min == 59) {
        horita->tm_min == 00;
    }
    // Condición para operar cuando la hora es 23:59:59
    if (horita->tm_hour == 23 && horita->tm_min == 59 && horita->tm_sec == 59) {
        horita->tm_hour == 00;
        horita->tm_min == 00;
        horita->tm_sec == 00;
    }
    // Condiciones para dar formato a la hora
    // Condición para dar formato cuando la hora, los minutos y los segundos son menores a 9
    if (horita->tm_hour <= 9 && horita->tm_min <= 9 && horita->tm_sec <= 9) {
        cout << "La hora actual es: 0" << (horita->tm_hour) <<":0"<< (horita->tm_min) <<":0"<< (horita->tm_sec) << "\n";
        cout << "La hora mas 1 segundo es: 0" << (horita->tm_hour) <<":0"<< (horita->tm_min) <<":0"<< (horita->tm_sec + 1) << "\n";    
    // Condición para dar formato cuando los minutos y los segundos son menores a 9
    } else if (horita->tm_min <=9 && horita->tm_sec <= 9) {
        cout << "La hora actual es: " << (horita->tm_hour) <<":0"<< (horita->tm_min) <<":0"<< (horita->tm_sec) << "\n";
        cout << "La hora mas 1 segundo es: " << (horita->tm_hour) <<":0"<< (horita->tm_min) <<":0"<< (horita->tm_sec + 1) << "\n";
    // Condición para dar formato cuando solamente la hora es menor a 9
    }  else if (horita->tm_hour <= 9) {
        cout << "La hora actual es: 0" << (horita->tm_hour) <<":"<< (horita->tm_min) <<":"<< (horita->tm_sec) << "\n";
        cout << "La hora mas 1 segundo es: 0" << (horita->tm_hour) <<":"<< (horita->tm_min) <<":"<< (horita->tm_sec + 1) << "\n";
    // Condición para dar formato cuando solamente los minutos son menores a 9
    } else if (horita->tm_min <= 9) {
        cout << "La hora actual es: " << (horita->tm_hour) <<":0"<< (horita->tm_min) <<":"<< (horita->tm_sec) << "\n";
        cout << "La hora mas 1 segundo es: " << (horita->tm_hour) <<":0"<< (horita->tm_min) <<":"<< (horita->tm_sec + 1) << "\n";
    // Condición para dar formato cuando solamente los segundos son menores a 9
    } else if (horita->tm_sec <= 9) {
        cout << "La hora actual es: " << (horita->tm_hour) <<":"<< (horita->tm_min) <<":0"<< (horita->tm_sec) << "\n";
        cout << "La hora mas 1 segundo es: " << (horita->tm_hour) <<":"<< (horita->tm_min) <<":0"<< (horita->tm_sec + 1) << "\n";
    // Si no se cumplen las condiciones anteriores
    } else {
        cout << "La hora actual es: " << (horita->tm_hour) <<":"<< (horita->tm_min) <<":"<< (horita->tm_sec) << "\n";
        cout << "La hora mas 1 segundo es: " << (horita->tm_hour) <<":"<< (horita->tm_min) <<":"<< (horita->tm_sec + 1) << "\n";
    }
}

int main()
{
    // Variable de tipo time en la que se almacena el valor actual
    time_t actual = time(0);
    // Mandamos a llamar la función para calcular la hora
    calcularHora(actual);
}