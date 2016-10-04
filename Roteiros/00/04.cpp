/**
 * Problem: BAFO - Bafo
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/BAFO/
 *
 * Author: Emerson Jair
 * Date: 6/7/2016
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    int R, a, b, aldo, beto, n = 1;

    while (cin >> R, R != 0) {
        aldo = beto = 0;
        for (int i = 0; i < R; i++) {
            cin >> a >> b;
            aldo += a;
            beto += b;
        }
        cout << "Teste " << n++ << endl;
        cout << (a > b ? "Aldo" : "Beto") << endl;
        cout << endl;
    }

    return 0;
}
