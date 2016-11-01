#include <bits/stdc++.h>

using namespace std;

int main(void) {
    unsigned long long int n, i = 10;
    
    cin >> n;
    
    while (n / i > 0) {
        cout << (n % i) / (i / 10);
        i *= 10;
    }
    cout << (n % i) / (i / 10);
    
    cout << endl;
    
    return 0;
}