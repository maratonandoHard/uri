#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int value;

	cin >> value;
	
	cout << value / 365 << " ano(s)" << endl;
	cout << value % 365 / 30 << " mes(es)" << endl;
	cout << value % 365 % 30 << " dia(s)" << endl;
}

