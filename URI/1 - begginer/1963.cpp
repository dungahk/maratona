#include <bits/stdc++.h>
#include <iomanip>

using namespace std;

int main(void) {
    double a, b;
    
    cin >> a >> b;
    
    cout << fixed << setprecision(2) << (b - a) / a * 100.0 << "%" << endl;
    return 0;
}