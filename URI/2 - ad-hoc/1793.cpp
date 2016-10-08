#include <bits/stdc++.h>

using namespace std;

#define MAX 200

int main (){
    int n, v[MAX], t, dif;
    
    cin >> n;
    
    while (n != 0) {
        t = 10;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        for (int i = n - 1; i >= 1; i--) {
            dif = v[i] - v[i - 1];
            if (dif > 10)
                dif = 10;
            t += dif;
        }
        cout << t << endl;
        cin >> n;
    }
}