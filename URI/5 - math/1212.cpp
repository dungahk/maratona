#include <bits/stdc++.h>

using namespace std;

int main(void) {
    long long int a, b, carry, vai;
    
    while (cin >> a >> b, a != 0 || b != 0) {
        carry = 0;
        vai = 0;
        while (a > 0 || b > 0) {
            vai = (a % 10 + b % 10 + vai) / 10;
            if (vai)
                carry++;
            a /= 10;
            b /= 10;
        }
        if (carry == 0)
            cout << "No carry operation.\n";
        else if (carry == 1)
            cout << carry << " carry operation.\n";
        else
            cout << carry << " carry operations.\n";
    }
    return 0;
}