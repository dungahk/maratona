#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "Ho";
        if (i == n - 1)
            cout << "!\n";
        else
            cout << " ";
    }
    return 0;
}