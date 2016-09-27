#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long p, j1, j2, r, a, p1 = 0, p2 = 0;
    
    cin >> p >> j1 >> j2 >> r >> a;
    
    if (r && a)
        p2 = 1;
    else if (r && !a)
        p1 = 1;
    else if (!r && a)
        p1 = 1;
    else
    // even
    if (p) {
        if ((j1 + j2) % 2 == 0)
            p1 = 1;
        else
            p2 = 1;
    }
    // odd
    else {
        if ((j1 + j2) % 2 == 0)
            p2 = 1;
        else
            p1 = 1;
    }
    
    if (p1)
        cout << "Jogador 1 ganha!" << endl;
    else
        cout << "Jogador 2 ganha!" << endl;
    
    return 0;
}
