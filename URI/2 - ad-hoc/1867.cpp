#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

ll sumNumber(string s) {
    ll number = 0;
    
    for (auto i : s) {
        number += i -'0';
    }
    
    return number;
}

ll oneDigit(string s) {
    ll number = sumNumber(s);
    
    while (number > 9) {
        number = sumNumber(to_string(number));
    }
    
    return number;
}

int main(int argc, char *argv[]) { _
    ull a, b;
    string n, m;
    
    cin >> n >> m;
    
    while (!(n.size() == 1 && n[0] == '0' && m.size() == 1 && m[0] == '0')) {
        a = oneDigit(n);
        b = oneDigit(m);
        if (a > b)
            cout << 1;
        else if (a < b)
            cout << 2;
        else
            cout << 0;
            
        cout << endl;
            
        cin >> n >> m;
    }
    
    return 0;
}
