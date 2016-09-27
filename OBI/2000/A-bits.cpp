#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long v, cinquenta, dez, cinco, um, test = 1;

    while (cin >> v, v != 0) {
        cinquenta = dez = cinco = um = 0;
        cinquenta = v / 50;
        v = v - 50 * cinquenta;

        dez = v / 10;
        v = v - 10 * dez;

        cinco = v / 5;
        v = v - 5 * cinco;

        um = v / 1;
        v = v - 1 * um;

        cout << "Teste " << test++ << endl;
        cout << cinquenta << " " << dez << " " << cinco << " " << um << endl << endl;
    }
    return 0;
}
