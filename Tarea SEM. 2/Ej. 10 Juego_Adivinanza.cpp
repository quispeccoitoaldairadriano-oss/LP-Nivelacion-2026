#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int numero, intento, contador = 0;

    srand(time(0));
    numero = rand() % 100 + 1;   // Número aleatorio entre 1 y 100

    cout << "Adivina el numero (1 - 100)!\n";

    do {
        cout << "Intento " << contador + 1 << ": ";
        cin >> intento;
        contador++;

        if (intento < numero) {
            cout << "El numero es MAYOR\n";
        } else if (intento > numero) {
            cout << "El numero es MENOR\n";
        } else {
            cout << "FELICIDADES! (" << contador << " intentos)\n";
        }

    } while (intento != numero);

    return 0;
}
