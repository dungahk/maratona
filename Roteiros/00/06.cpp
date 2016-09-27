/**
 * Problem: PRIMO - Primo
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/PRIMO/
 *
 * Author: Emerson Jair
 * Date: 6/7/2016
 */

#include <bits/stdc++.h>

using namespace std;

string primo(int);

int main(int argc, char *argv[]) {
    int n;

    cin >> n;

    cout << primo(n) << endl;

    return 0;
}

string primo(int n) {
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return "nao";
    }
    return "sim";
}
