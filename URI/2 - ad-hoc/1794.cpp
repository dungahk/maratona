#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(int argc, char *argv[]) { _
    ll n, la, lb, sa, sb;
    
    cin >> n;
    cin >> la >> lb;
    cin >> sa >> sb;
    
    if (n >= la && n <= lb && n >= sa && n <= sb)
        cout << "possivel";
    else
        cout << "impossivel";
    
    cout << endl;
    return 0;
}
