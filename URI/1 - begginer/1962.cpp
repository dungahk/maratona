#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, k, year;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> k;
        year = 2015 - k;
        if (year > 0)
            cout << year << " D.C.\n";
        else
            cout << year * (-1) + 1 << " A.C.\n";
    }
    return 0;
}