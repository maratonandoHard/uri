#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    
    const double PI = 3.14159;
    double raio;

    cin >> raio;
    cout << setprecision(4) << fixed;
    cout << "A=" << PI * (raio * raio) << endl;
}