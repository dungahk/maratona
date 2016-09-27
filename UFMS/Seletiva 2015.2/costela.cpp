#include <bits/stdc++.h>

using namespace std;

bool primo(int);

int main(int argc, char *argv[]) {
    int qtd, primos[9][1000], start, end, pos, number;

    cin >> qtd;

    start = 1;
    end = 9;
    for (int i = 1; i <= qtd; i++) {
        pos = 0;
        if (i > 1) {
            for (int j = 0; primos[i - 1][j] != -1; j++) {
                number = primos[i - 1][j];
                for (int k = 1; k < 10; k += 2) {
                    if (primo(number * 10 + k)) {
                        primos[i][pos++] = number * 10 + k;
                    }
                }
            }
        }
        else {
            for (int j = start; j <= end; j++) {
                if (primo(j)) {
                    primos[i][pos++] = j;
                }
            }
        }
        primos[i][pos] = -1;
        start *= 10;
        end = end * 10 + 9;
    }

    // for (int i = 1; i <= qtd; i++) {
        for (int j = 0; primos[qtd][j] != -1; j++) {
            cout << primos[qtd][j] << endl;
        }
    // }

    return 0;
}

bool primo(int n) {
    if (n <= 1)
        return false;

    if (n == 2)
        return true;

    if (n % 2 == 0)
        return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }

    return true;
}
