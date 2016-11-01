#include <bits/stdc++.h>

using namespace std;

#define MAX 201

int main(int argc, char *argv[]) {
    long long n, caso = 1;
    vector<long long> seq;
    
    seq.push_back(1);
    for (int i = 1; i < MAX; i++) {
        seq.push_back(seq[i - 1] + i);
    }
    
    while (cin >> n) {
        if (n == 0) {
            cout << "Caso " << caso++ << ": 1 numero" << endl;
            cout << "0" << endl << endl;
        }
        else {
            cout << "Caso " << caso++ << ": " << seq[n] << " numeros" << endl;
            cout << "0 ";
            for (int i = 1; i <= n; i++) {
                for (int j = 0; j < i; j++) {
                    if (i == n && j == i - 1)
                        cout << i;
                    else
                        cout << i << " ";
                }
            }
            cout << endl << endl;
        }
    }
    return 0;
}
