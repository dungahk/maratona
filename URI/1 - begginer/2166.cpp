#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long n;
    double root = 1.0, deno = 2.0;

    cin >> n;

    for (int i = 1; i < n; i++) {
        deno = 2.0 + 1.0/deno;
    }

    if (n > 0)
        root += 1.0 / deno;

    cout << fixed << setprecision(10) << root << endl;
    return 0;
}
