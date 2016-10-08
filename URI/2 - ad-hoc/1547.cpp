#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, qt, s, tryout, winner, menor;
    
    cin >> n;
    
    for (int z = 0; z < n; z++) {
        menor = LLONG_MAX;
        cin >> qt >> s;
        
        for (int i = 0; i < qt; i++) {
            cin >> tryout;
            if (abs(tryout - s) < menor) {
                menor = abs(tryout - s);
                winner = i + 1;
            }
        }
        
        cout << winner << endl;
    }
    
    return 0;
}
