#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double A, B, C, pi= 3.14159, a, b, x, d, e;

    cin >> A >> B >> C;

    a = 0.5 * A*C;
    b = pi * (C*C);
    x = 0.5 * ((A + B) * C);
    d = B*B;
    e = A*B;

    cout << fixed << setprecision(3) << "TRIANGULO: " << a << endl;
    cout << fixed << setprecision(3) << "CIRCULO: " << b << endl;
    cout << fixed << setprecision(3) << "TRAPEZIO: " << x << endl;
    cout << fixed << setprecision(3) << "QUADRADO: " << d << endl;
    cout << fixed << setprecision(3) << "RETANGULO: " << e << endl;
}