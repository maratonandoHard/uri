#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int number, hours;
    double value;
    
    cin >> number >> hours >> value;
    
    cout << "NUMBER = " << number << endl;
    cout << setprecision(2) << fixed;
    cout << "SALARY = U$ " << (hours * value) << endl; 
}
