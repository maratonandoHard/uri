#include <iostream>
#include <iomanip>

using namespace std;

#define  PI 3.14159

int main() {
	double raio;

	cin >> raio;
	cout << setprecision(3) << fixed;
	cout << "VOLUME = " << ( 4.0 / 3) * PI * (raio * raio * raio) << endl;
}
