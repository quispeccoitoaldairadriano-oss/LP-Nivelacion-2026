#include <iostream>
using namespace std;

int main() {
    int n, suma = 0;

    cout << "Ingrese N: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }

    cout << "Suma de pares: " << suma << endl;

    return 0;
}
