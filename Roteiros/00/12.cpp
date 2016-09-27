/**
 * Problem: Factorial Sum
 * Judge: URI Online Judge
 * Link: https://www.urionlinejudge.com.br/judge/en/problems/view/1161
 *
 * Author: Emerson Jair
 * Date: 6/9/2016
 */

#include <bits/stdc++.h>

using namespace std;

unsigned long long fat(unsigned long long);

int main(int argc, char *argv[]) {
    unsigned long long n, m;

    while (cin >> n >> m) {
        cout << fat(n) + fat(m) << endl;
    }

    return 0;
}

unsigned long long fat(unsigned long long n) {
    if (n <= 1)
        return 1;
    return n * fat(n - 1);
}
