#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, aux, dx, dy, bx, by, x, y;
    
    cin >> n;
    
    for (int z = 0; z < n; z++) {
        cin >> aux >> aux >> bx >> by >> aux >> aux >> dx >> dy >> x >> y;
        if (x >= dx && x <= bx && y >= by && y <= dy)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    
    return 0;
}
