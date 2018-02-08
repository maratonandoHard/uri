#include <iostream>
#include <iomanip>

using namespace std;

#define PI 3.14159

int main() {
	double a, b, c;

	cin >> a >> b >> c;

	cout << setprecision(3) << fixed;
	cout << "TRIANGULO: " << (a * c) / 2 << endl;
	cout << "CIRCULO: " << (PI * (c * c)) << endl;
	cout << "TRAPEZIO: " << ((a + b) * c) / 2 << endl;
	cout << "QUADRADO: " << (b * b) << endl;
	cout << "RETANGULO: " << (a * b) << endl;
}
