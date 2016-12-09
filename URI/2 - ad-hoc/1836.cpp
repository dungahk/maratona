#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(int argc, char *argv[]) { _
    ll n, pokelvl, hpbs, hpiv, hpev, atbs, ativ, atev, dfbs, dfiv, dfev, spbs, spiv, spev, hp, at, df, sp;
    double hpd, atd, dfd, spd;
    string pokename;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> pokename >> pokelvl;
        cin >> hpbs >> hpiv >> hpev;
        cin >> atbs >> ativ >> atev;
        cin >> dfbs >> dfiv >> dfev;
        cin >> spbs >> spiv >> spev;
        
        hpd = 10.0 + pokelvl * (hpiv + hpbs + sqrt(hpev) / 8.0 + 50.0) / 50.0;
        atd = 5.0 + pokelvl * (ativ + atbs + sqrt(atev) / 8.0) / 50.0;
        dfd = 5.0 + pokelvl * (dfiv + dfbs + sqrt(dfev) / 8.0) / 50.0;
        spd = 5.0 + pokelvl * (spiv + spbs + sqrt(spev) / 8.0) / 50.0;
        hp = hpd;
        at = atd;
        df = dfd;
        sp = spd;
        
        cout << "Caso #" << i + 1 << ": " << pokename << " nivel "<< pokelvl << endl;
        cout << "HP: " << hp << endl;
        cout << "AT: " << at << endl;
        cout << "DF: " << df << endl;
        cout << "SP: " << sp << endl;
    }
    
    return 0;
}
