#include <iostream>

using namespace std;

int main(){
	
	int value;

	cin >> value;
	cout << value / 60 / 60 << ":" << value / 60 % 60 << ":" << value % 60 << endl;
}
