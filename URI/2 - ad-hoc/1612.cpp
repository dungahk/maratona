#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, k;
    
    cin >> n;
    
    for (int z = 0; z < n; z++) {
        cin >> k;
        if (k % 2)
            cout << k / 2 + 1 << endl;
        else
            cout << k / 2 << endl;
    }
    
    return 0;
}
