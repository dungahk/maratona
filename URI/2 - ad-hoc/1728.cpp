#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    unsigned long long a, b, c, j, k, dez;
    string eq;
    
    while (cin >> eq, eq.compare("0+0=0") != 0) {
        dez = 1;
        a = 0;
        for (int i = 0; eq[i] != '+'; i++) {
            a = a + dez * (eq[i] - '0');
            dez *= 10;
            j = i;
        }
        
        dez = 1;
        b = 0;
        for (int i = j + 2; eq[i] != '='; i++) {
            b = b + dez * (eq[i] - '0');
            dez *= 10;
            k = i;
        }
        
        dez = 1;
        c = 0;
        for (int i = k + 2; i < eq.size(); i++) {
            c = c + dez * (eq[i] - '0');
            dez *= 10;
        }
        
        if (a + b == c)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    
    dez = 1;
    a = 0;
    for (int i = 0; eq[i] != '+'; i++) {
        a = a + dez * (eq[i] - '0');
        dez *= 10;
        j = i;
    }
    
    dez = 1;
    b = 0;
    for (int i = j + 2; eq[i] != '='; i++) {
        b = b + dez * (eq[i] - '0');
        dez *= 10;
        k = i;
    }
    
    dez = 1;
    c = 0;
    for (int i = k + 2; i < eq.size(); i++) {
        c = c + dez * (eq[i] - '0');
        dez *= 10;
    }
    
    if (a + b == c)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    
    return 0;
}
