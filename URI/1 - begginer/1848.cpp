#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int sum = 0;
    string k;
    
    while (cin >> k) {
        if (k.compare("caw") == 0) {
            cin >> k;
            cout << sum << endl;
            sum = 0;
        }
        else {
            for (int i = 0; i < 3; i++) {
                if (k[i] == '*')
                    sum += pow(2, 3 - i - 1);
            }
        }
    }
    return 0;
}