#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, test;
    
    const char *centenas[] = {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    const char *dezenas[] = {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    const char *unidades[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    
    cin >> n;
    
    test = n / 100;
    if (test > 0)
        cout << centenas[test - 1];
    n = n % 100;
    
    test = n / 10;
    if (test > 0)
        cout << dezenas[test - 1];
    n = n % 10;
    
    if (n > 0)
        cout << unidades[n - 1];
        
    cout << endl;
    
    return 0;
}
