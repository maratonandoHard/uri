#include <iostream>
#include <iomanip>

using namespace std;

int main() { 
    string nome;
    double salario_fixo, montante_total;

    cin >> nome >> salario_fixo >> montante_total;

    cout << setprecision(2) << fixed;
    cout << "TOTAL = R$ " << (montante_total * 0.15) + salario_fixo << endl;
}
