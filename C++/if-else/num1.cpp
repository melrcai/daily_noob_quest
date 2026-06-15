#include <iostream>
#include <iomanip>
using namespace std;

double computeTax(double salary);

int main() {

    double salary;
    double tax;

    cout << "Enter your salary: $";
    cin >> salary; 

    tax = computeTax(salary);
    cout << "Expected tax you owe: $" << fixed << setprecision(2) << tax << endl;

    return 0;
}

double computeTax(double salary) {
    double computedTax;

    if (salary >= 0 && salary <= 7150) {
        computedTax = salary * 0.10;
    } else if (salary <= 29050) {
        computedTax = ((salary - 7150) * 0.15) + 715;
    } else if (salary <= 70350) {
        computedTax = ((salary - 29050) * 0.25) + 4000;
    } else {
        computedTax = ((salary - 70350) * 0.28) + 14325;
    }
    
    return computedTax;
}
