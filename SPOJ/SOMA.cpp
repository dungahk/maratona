#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(int argc, char *argv[]) { _
    ll n, a, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a;
        sum += a;
    }
    cout << sum;
    cout << endl;
    return 0;
}
