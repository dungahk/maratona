#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, k;
    
    while (cin >> n, n != 0) {
        if (n == 1)
            cout << setw(3) << 1 << endl;
        else {
            for (int i = 0; i < n; i++) {
                k = 1;
                for (int j = 0; j < n; j++) {
                    if ((i * j) % (n - 1) == 0)
                        cout << setw(3) << 1 << " ";
                    else {
                        k = i * j;
                        k = k % (n - 1);
                        cout << setw(3) << k + 1 << " ";
                    }
                }
                cout << endl;
            }
        }
        cout << endl;
    }
    
    return 0;
}