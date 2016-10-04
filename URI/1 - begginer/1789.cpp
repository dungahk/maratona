#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, max, a;
    
    while (cin >> n) {
        max = 0;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a > max)
                max = a;
        }
        
        if (max < 10)
            cout << 1 << endl;
        else if (max < 20)
            cout << 2 << endl;
        else
            cout << 3 << endl;
    }
    return 0;
}