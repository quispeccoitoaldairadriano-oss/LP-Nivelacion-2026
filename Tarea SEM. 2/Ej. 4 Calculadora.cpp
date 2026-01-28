#include <iostream>
using namespace std;

int main() {
    int opcion;
    double a, b, resultado;

    do {
        cout << "\n====== CALCULADORA ======\n";
        cout << "1. Suma\n";
        cout << "2. Resta\n";
        cout << "3. Multiplicacion\n";
        cout << "4. Division\n";
        cout << "0. Salir\n";
        cout << "=========================\n";
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese a: ";
            cin >> a;
            cout << "Ingrese b: ";
            cin >> b;
        }

        switch (opcion) {
            case 1:
                resultado = a + b;
                cout << "Resultado: " << resultado << endl;
                break;

            case 2:
                resultado = a - b;
                cout << "Resultado: " << resultado << endl;
                break;

            case 3:
                resultado = a * b;
                cout << "Resultado: " << resultado << endl;
                break;

            case 4:
                if (b == 0) {
                    cout << "Error: division por cero" << endl;
                } else {
                    resultado = a / b;
                    cout << "Resultado: " << resultado << endl;
                }
                break;

            case 0:
                cout << "Saliendo del programa..." << endl;
                break;

            default:
                cout << "Opcion no valida" << endl;
        }

    } while (opcion != 0);

    return 0;
}
