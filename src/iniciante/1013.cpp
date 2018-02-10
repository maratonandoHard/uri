#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;
	
	int test = (a + b + abs(a - b)) / 2;

	if (c < test)
	       c  = test;

	cout << c << " eh o maior" << endl;	
}
