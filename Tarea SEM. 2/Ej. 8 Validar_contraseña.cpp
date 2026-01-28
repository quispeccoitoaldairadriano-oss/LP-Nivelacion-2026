#include <iostream>
#include <string>
using namespace std;

int main() {
    string pass;
    bool mayus = false, minus = false, dig = false, esp = false;

    cout << "Ingrese la contrasena: ";
    cin >> pass;

    if (pass.length() < 8) {
        cout << "Contrasena INVALIDA: minimo 8 caracteres" << endl;
        return 0;
    }

    for (int i = 0; i < pass.length(); i++) {
        char c = pass[i];

        if (c >= 'A' && c <= 'Z') mayus = true;
        else if (c >= 'a' && c <= 'z') minus = true;
        else if (c >= '0' && c <= '9') dig = true;
        else if (c == '!' || c == '@' || c == '#' || c == '$' || c == '%') esp = true;
    }

    if (mayus && minus && dig && esp) {
        cout << "Contrasena VALIDA" << endl;
    } else {
        cout << "Contrasena INVALIDA" << endl;
    }

    return 0;
}
