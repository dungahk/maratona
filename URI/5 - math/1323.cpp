#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, total;
    
    while (cin >> n, n != 0) {
        total = 1;
        for (int i = 2; i <= n; i++) {
            total += i * i;
        }
        
        cout << total << endl;
    }
    return 0;
}