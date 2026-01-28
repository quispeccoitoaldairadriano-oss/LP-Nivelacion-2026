#include <iostream>
using namespace std;

int main() {
    int n, inverso = 0;

    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    while (n > 0) {
        int digito = n % 10; //saca el ultimo digito
        inverso = inverso * 10 + digito; //construye el numero inverso
        n = n / 10; //elimina el ultimo digito
    }

    cout << "Numero inverso: " << inverso << endl;

    return 0;
}
