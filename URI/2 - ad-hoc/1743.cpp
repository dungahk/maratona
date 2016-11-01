#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int a[5], b[5];
    bool k = true;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++) {
        cin >> b[i];
    }
    for (int i = 0; i < 5; i++) {
        if (a[i] == b[i])
            k = false;
    }
    
    if (k)
        cout << "Y\n";
    else
        cout << "N\n";
    return 0;
}