#include <bits/stdc++.h>

using namespace std;

int max(int);

int main(void) {
    int n, k, tam;
    
    while (cin >> n, n != 0) {
        tam = max(n);
        k = 1;
        for (int i = 0; i < n; i++) {
            k = pow(2, i);
            
            for (int j = 0; j < n; j++) {
                cout << setw(tam) << k;
                if (j != n - 1)
                    cout << " ";
                k *= 2;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

int max(int n) {
    int k = pow(2, 2 * (n - 1)), qtd = 0;
    while (k > 0) {
        k /= 10;
        qtd++;
    }
    
    return qtd;
}