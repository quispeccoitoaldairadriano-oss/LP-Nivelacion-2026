#include <iostream>
using namespace std;

int main() {
    int n, opcion;

    cout << "Ingrese N (filas): ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: N debe ser positivo" << endl;
        return 0;
    }

    cout << "\nElija el patron:\n";
    cout << "1. Patron A\n";
    cout << "2. Patron B\n";
    cout << "3. Patron C\n";
    cout << "Opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1: // Patron A
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= i; j++) {
                    cout << "*";
                }
                cout << endl;
            }
            break;

        case 2: // Patron B
            for (int i = n; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << "*";
                }
                cout << endl;
            }
            break;

        case 3: // Patron C
            for (int i = 1; i <= n; i++) {
                for (int e = 1; e <= n - i; e++) {
                    cout << " ";
                }
                for (int j = 1; j <= 2 * i - 1; j++) {
                    cout << "*";
                }
                cout << endl;
            }
            break;

        default:
            cout << "Opcion no valida" << endl;
    }

    return 0;
}
    