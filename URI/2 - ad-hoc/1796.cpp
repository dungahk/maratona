#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(int argc, char *argv[]) { _
    ll n, no, k;
    
    cin >> n;
    
    no = 0;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k)
            no++;
    }
    
    if (n - no > no)
        cout << "Y";
    else
        cout << "N";
    
    cout << endl;
    return 0;
}
