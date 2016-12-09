#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(int argc, char *argv[]) { _
    ll n, m, linha = -1, sum, k;
    vector<ll> v;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = 0; j < m; j++) {
            cin >> k;
            sum += k;
            v.push_back(k);
        }
        if (sum > linha)
            linha = sum;
    }
    
    for (int i = 0; i < m; i++) {
        sum = 0;
        for (int j = 0; j < n; j++) {
            sum += v[j*m + i];
        }
        if (sum > linha)
            linha = sum;
    }
    
    cout << linha;
    
    cout << endl;
    return 0;
}
