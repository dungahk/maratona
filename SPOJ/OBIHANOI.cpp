#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(int argc, char *argv[]) { _
    ll n, teste = 1;
    while (cin >> n, n != 0) {
        cout << "Teste " << teste++ << endl;
        cout << pow(2, n) - 1 << endl << endl;
    }
    // cout << endl;
    return 0;
}
