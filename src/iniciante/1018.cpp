#include <iostream>

using namespace std;

int main() {
	int value, qtd_notas;
	
	cin >> value;

	cout << value << endl;

	qtd_notas = value / 100;	
	cout << qtd_notas << " nota(s) de R$ 100,00" << endl;
	
	value -= (qtd_notas * 100);
	
	qtd_notas = value / 50;
	cout << qtd_notas << " nota(s) de R$ 50,00" << endl;

	value -= (qtd_notas * 50);

	qtd_notas = value / 20;
	cout << qtd_notas << " nota(s) de R$ 20,00" << endl;

	value -= (qtd_notas * 20);

	qtd_notas = value / 10;
	cout << qtd_notas << " nota(s) de R$ 10,00" << endl;
	
	value -= (qtd_notas * 10);

	qtd_notas = value / 5;
	cout << qtd_notas << " nota(s) de R$ 5,00" << endl;

	value -= (qtd_notas * 5);

	qtd_notas = value / 2;
	cout << qtd_notas << " nota(s) de R$ 2,00" << endl;

	value -= (qtd_notas * 2);

	qtd_notas = value / 1;
	cout << qtd_notas << " nota(s) de R$ 1,00" << endl;
}

