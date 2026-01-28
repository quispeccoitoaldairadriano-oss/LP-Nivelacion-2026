#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Ingrese N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Error: N debe ser positivo" << endl;
        return 0;
    }

    long long a = 0, b = 1, c;

    if (N == 1) {
        cout << a << endl;
    }
    else if (N == 2) {
        cout << a << " " << b << endl;
    }
    else {
        cout << a << " " << b << " ";
        for (int i = 3; i <= N; i++) {
            c = a + b;
            cout << c << " ";
            a = b;
            b = c;
        }
        cout << endl;
    }

    return 0;
}
