#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(void) {
    double salary, tax = 0.0;
    
    cin >> salary;
    
    if (salary > 4500.0) {
        tax += (salary - 4500.0) * 0.28;
        salary = 4500.0;
    }
    if (salary > 3000.0) {
        tax += (salary - 3000.0) * 0.18;
        salary = 3000.0;
    }
    if (salary > 2000.0) {
        tax += (salary - 2000.0) * 0.08;
        salary = 2000.0;
    }
    if (tax == 0.0)
        cout << "Isento";
    else
        cout << "R$ " << fixed << setprecision(2) << tax;
    
    cout << endl;
    
    return 0;
}