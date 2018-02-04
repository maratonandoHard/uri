#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int code, qtd;
    double valor, total;

    cin >> code >> qtd >> valor;
    total = qtd * valor;

    cin >> code >> qtd >> valor;

    cout << setprecision(2) << fixed;
    cout << "VALOR A PAGAR: R$ " <<total + (qtd * valor) << endl;
}