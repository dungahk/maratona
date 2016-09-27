/**
 * Problem: QUERM - Quermesse
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/QUERM/
 *
 * Author: Emerson Jair
 * Date: 6/9/2016
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    int n, winner, a, teste = 1;

    while (cin >> n, n != 0) {
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (a == i + 1)
                winner = a;
        }
        cout << "Teste " << teste++ << endl;
        cout << winner << endl << endl;
    }

    return 0;
}
