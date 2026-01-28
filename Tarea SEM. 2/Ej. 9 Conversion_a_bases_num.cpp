#include <iostream>
#include <string>
using namespace std;

int main() {
    int opcion;
    int n, temp, base;
    string resultado;

    do {
        cout << "\n====== CONVERSION DE BASES ======\n";
        cout << "1. Decimal a Binario\n";
        cout << "2. Decimal a Octal\n";
        cout << "3. Decimal a Hexadecimal\n";
        cout << "4. Salir\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 3) {
            cout << "Ingrese numero decimal: ";
            cin >> n;

            if (n < 0) {
                cout << "Error: numero debe ser positivo\n";
                continue;
            }

            temp = n;
            resultado = "";

            switch (opcion) {
                case 1: base = 2; break;
                case 2: base = 8; break;
                case 3: base = 16; break;
            }

            while (temp > 0) {
                int residuo = temp % base;

                if (residuo < 10)
                    resultado = char(residuo + '0') + resultado;
                else
                    resultado = char(residuo - 10 + 'A') + resultado;

                temp /= base;
            }

            cout << "Resultado: " << resultado << endl;
        }
        else if (opcion == 4) {
            cout << "Saliendo del programa...\n";
        }
        else {
            cout << "Opcion no valida\n";
        }

    } while (opcion != 4);

    return 0;
}
