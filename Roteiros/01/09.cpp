/**
 * Problem: Square Matrix I
 * Judge: URI Online Judge
 * Link: https://www.urionlinejudge.com.br/judge/en/problems/view/1435
 *
 * Author: Emerson Jair
 * Date: 6/9/2016
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    int n, m[200][200], val;

    while (cin >> n, n != 0) {
        val = 1;
        for (int k = 0; k < n; k++) {
            for (int i = k; i < n - k; i++) {
                for (int j = k; j < n - k; j++) {
                    m[i][j] = val;
                }
            }
            val++;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                printf("%3d", m[i][j]);
                if (j != n - 1)
                    cout << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
