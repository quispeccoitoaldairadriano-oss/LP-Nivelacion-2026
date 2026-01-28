#include <iostream>
using namespace std;

int main() {
    int nota;

    cout << "Ingrese la nota (0 - 20): ";
    cin >> nota;

    if (nota < 0 || nota > 20) {
        cout << "Error: fuera de rango" << endl;
    }
    else if (nota >= 18) {
        cout << "A - Excelente" << endl;
    }
    else if (nota >= 15) {
        cout << "B - Muy Bueno" << endl;
    }
    else if (nota >= 11) {
        cout << "C - Bueno" << endl;
    }
    else if (nota >= 8) {
        cout << "D - Regular" << endl;
    }
    else {
        cout << "F - Desaprobado" << endl;
    }

    return 0;
}
