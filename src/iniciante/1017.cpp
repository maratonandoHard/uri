#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int hrs, vel;

	cin >> hrs >> vel;

	cout << setprecision(3) << fixed;
	cout << hrs * vel / 12.0 << endl;
}
