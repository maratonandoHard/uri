#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int qtd_notas;
	float value;

	cin >> value;

	cout << "NOTAS:" << endl;
	
	qtd_notas = value / 100;	
	cout << qtd_notas << " nota(s) de R$ 100.00" << endl;
	
	value -= (qtd_notas * 100);
	
	qtd_notas = value / 50;
	cout << qtd_notas << " nota(s) de R$ 50.00" << endl;

	value -= (qtd_notas * 50);

	qtd_notas = value / 20;
	cout << qtd_notas << " nota(s) de R$ 20.00" << endl;

	value -= (qtd_notas * 20);

	qtd_notas = value / 10;
	cout << qtd_notas << " nota(s) de R$ 10.00" << endl;
	
	value -= (qtd_notas * 10);

	qtd_notas = value / 5;
	cout << qtd_notas << " nota(s) de R$ 5.00" << endl;

	value -= (qtd_notas * 5);

	qtd_notas = value / 2;
	cout << qtd_notas << " nota(s) de R$ 2.00" << endl;

	value -= (qtd_notas * 2);

	cout << "MOEDAS:" << endl;

	qtd_notas = value / 1;
	cout << qtd_notas << " moeda(s) de R$ 1.00" << endl;

	value -= (qtd_notas);

	qtd_notas = (value * 10) / (0.50 * 10);
	cout << qtd_notas << " moeda(s) de R$ 0.50" << endl;

	value -= 0.50 * qtd_notas;

	qtd_notas = (value * 10) / ( 0.25 * 10);
	cout << qtd_notas << " moeda(s) de R$ 0.25" << endl;
	
	value -= 0.25 * qtd_notas;

	qtd_notas = (value * 10) / (0.10 * 10);
	cout << qtd_notas << " moeda(s) de R$ 0.10" << endl;

	value -= 0.10 * qtd_notas;

	qtd_notas = (value * 10) / (0.05 * 10);
	cout << qtd_notas << " moeda(s) de R$ 0.05" << endl;

	value -= 0.05 * qtd_notas;

	qtd_notas = (abs(value) * 10) / (0.01 * 10) + 0.1;
	cout << qtd_notas << " moeda(s) de R$ 0.01" << endl;
}
