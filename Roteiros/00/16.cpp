/**
 * Problem: NUMEROMG - Some dois números
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/NUMEROMG/
 *
 * Author: Emerson Jair
 * Date: 6/9/2016
 */

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ULL;

string convert10to36(ULL);
ULL convert36to10(string);

int main(int argc, char *argv[]) {
    string a, b;

    while (cin >> a >> b) {
        if (a.size() == 1 && a[0] == '0' && b.size() == 1 && b[0] == '0')
            break;
        cout << convert10to36(convert36to10(a) + convert36to10(b)) << endl;
    }

    return 0;
}

string convert10to36(ULL n) {
    ULL last;
    char c;
    string aux, num36;
    while (n > 0) {
        last = n % 36;
        if (last < 10)
            c = last + '0';
        else
            c = last - 10 + 'A';
        aux.push_back(c);
        n /= 36;
    }
    for (int i = aux.size() - 1; i >= 0; i--) {
        num36.push_back(aux[i]);
    }

    return num36;
}

ULL convert36to10(string a) {
    ULL base = 1, n = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        if (isdigit(a[i]))
            n += (a[i] - '0') * base;
        else
            n += (a[i] - 'A' + 10) * base;
        base *= 36;
    }
    return n;
}
