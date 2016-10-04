/**
 * Problem: NLOGONIA - Divisão da Nlogônia
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/NLOGONIA/
 *
 * Author: Emerson Jair
 * Date: 8/8/2016
 */

#include <bits/stdc++.h>

using namespace std;

void city(int n, int m, int x, int y);

int main(int argc, char *argv[]) {
    int k, n, m, x, y;

    while (cin >> k, k != 0) {
        cin >> n >> m;

        for (int i = 0; i < k; i++) {
            cin >> x >> y;
            city(n, m, x, y);
        }
    }

    return 0;
}

void city(int n, int m, int x, int y) {
    if (n == x || m == y)
        cout << "divisa\n";
    else if (x < n && y > m)
        cout << "NO\n";
    else if (x > n && y > m)
        cout << "NE\n";
    else if (x < n && y < m)
        cout << "SO\n";
    else
        cout << "SE\n";
}
