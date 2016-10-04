#include <bits/stdc++.h>

using namespace std;

int main() {
    int k, n, a;
    cin >> k;
    for (int i = 0; i < k; i++) {
        cin >> n;
        for (int j = 0; j < n; j++) {
            cin >> a;
            if (j + 1 == n / 2 + 1)
                cout << "Case " << i + 1 << ": " << a << endl;
        }
    }
    
    return 0;
}