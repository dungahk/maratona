#include <bits/stdc++.h>

using namespace std;

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(int argc, char *argv[]) {
    long long n, e, f, g, h, x, y, z, w, test = 1;
    bool nenhum;
    
    while (cin >> n, n != 0) {
        cin >> x >> y >> z >> w;
        nenhum = false;
        
        for (int i = 1; i < n; i++) {
            cin >> e >> f >> g >> h;
            if (!nenhum) {
                x = MAX(x, e);
                y = MIN(y, f);
                z = MIN(z, g);
                w = MAX(w, h);
            }
            if (x >= z || y <= w)
                nenhum = true;
        }
        
        cout << "Teste " << test++ << endl;
        if (nenhum)
            cout << "nenhum\n\n";
        else
            cout << x << " " << y << " " << z << " " << w << endl << endl;
    }
    return 0;
}
