#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
long long n, e, f, g, h, x, y, z, w, test = 1;
bool nenhum;

while (cin >> n, n != 0) {
    nenhum = false;
    cin >> x >> y >> z >> w;

    for (int i = 1; i < n; i++) {
        cin >> e >> f >> g >> h;
        if (!nenhum) {
            // 1 ponto
            if (e >= x && e <= z && f >= w && f <= y && g >= z && h <= w) {
                x = e;
                y = f;
                z = z;
                w = w;
            }
            else if (e <= x && f >= w && f <= y && g >= x && g <= z && h <= w) {
                x = x;
                y = f;
                z = g;
                w = w;
            }
            else if (e >= x && e <= z && f >= y && g >= z && h >= w && h <= y) {
                x = e;
                y = y;
                z = z;
                w = h;
            }
            else if (e <= x && f >= y && g >= x && g <= z && h >= w && h <= y) {
                x = x;
                y = y;
                z = g;
                w = h;
            }

            // 2 pontos
            else if (e >= x && e <= z && f >= w && f <= y && g >= x && g <= z && h <= w) {
                x = e;
                y = f;
                z = g;
                w = w;
            }
            else if (e >= x && e <= z && f >= w && f <= y && g >= z && h >= w && h <= y) {
                x = e;
                y = f;
                z = z;
                w = h;
            }
            else if (e >= x && e <= z && f >= y && g >= x && g <= z && h >= w && h <= y) {
                x = e;
                y = y;
                z = g;
                w = h;
            }
            else if (e <= x && f >= w && f <= y && g >= x && g <= z && h >= w && h <= y) {
                x = x;
                y = f;
                z = g;
                w = h;
            }

            // 4 pontos
            else if (e >= x && e <= z && f >= w && f <= y && g >= x && g <= z && h >= w && h <= y) {
                x = e;
                y = f;
                z = g;
                w = h;
            }

            // 0 pontos
            else if (e <= x && f >= y && g >= z && h <= w) {
                x = x;
                y = y;
                z = z;
                w = w;
            }
            else
                nenhum = true;
        }
    }

    cout << "Teste " << test++ << endl;
    if (nenhum)
        cout << "nenhum\n\n";
    else
        cout << x << " " << y << " " << z << " " << w << endl << endl;
}
return 0;
}
