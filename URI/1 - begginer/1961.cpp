#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;

int main(void) {
    int n, p, last, k;
    bool win = true;
    
    cin >> p >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (i > 0 && abs(k - last) > p)
            win = false;
        last = k;
    }
    
    if (win)
        cout << "YOU WIN\n";
    else
        cout << "GAME OVER\n";
        
    return 0;
}
