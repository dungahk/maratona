#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, a;
    vector<int> par, impar;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a % 2)
            impar.push_back(a);
        else
            par.push_back(a);
    }
    
    sort(par.begin(), par.end());
    sort(impar.begin(), impar.end());
    
    for (int i = 0; i < par.size(); i++) {
        cout << par[i] << endl;
    }
    for (int i = impar.size() - 1; i >= 0; i--) {
        cout << impar[i] << endl;
    }
    
    return 0;
}