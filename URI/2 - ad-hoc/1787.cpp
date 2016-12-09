#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

bool pot2(ll n) {
    int um = 0;
    while (n > 0) {
        if (n % 2 == 1)
            um++;
        if (um > 1)
            return false;
        n >>= 1;
    }
    return true;
}

int main(int argc, char *argv[]) { _
    ll n, uilton, rita, ingred, u, r, i;
    
    while (cin >> n, n != 0) {
        uilton = rita = ingred = 0;
        for (int j = 0; j < n; j++) {
            cin >> u >> r >> i;
            if (pot2(u)) {
                uilton++;
                if (u > r && u > i)
                    uilton++;
            }
            if (pot2(r)) {
                rita++;
                if (r > u && r > i)
                    rita++;
            }
            if (pot2(i)) {
                ingred++;
                if (i > r && i > u)
                    ingred++;
            }
        }
        
        if (uilton > rita && uilton > ingred)
            cout << "Uilton";
        else if (rita > uilton && rita > ingred)
            cout << "Rita";
        else if (ingred > uilton && ingred > rita)
            cout << "Ingred";
        else
            cout << "URI";
            
        cout << endl;
    }
    
    return 0;
}
