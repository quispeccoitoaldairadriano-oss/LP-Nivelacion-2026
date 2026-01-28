#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingrese un numero positivo mayor que 1: ";
    cin >> n;

    if (n <= 1) {
        cout << "Error: el numero debe ser mayor que 1" << endl;
        return 0;
    }

    cout << "Divisores propios: ";

    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0) {
            cout << i << " ";
            suma += i;
        }
    }

    cout << "\nSuma de divisores: " << suma << endl;

    if (suma == n) {
        cout << n << " es un numero perfecto" << endl;
    } else {
        cout << n << " NO es un numero perfecto" << endl;
    }

    return 0;
}
