#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int a, b, c, d;
    
    cin >> a >> b;
    c = a / b;
    d = a % b;
    if (d < 0) {
        if (b > 0)
            d += b;
        else
            d -= b;
        c = (a - d) / b;
    }
    cout << c << " " << d << endl;
    return 0;
}