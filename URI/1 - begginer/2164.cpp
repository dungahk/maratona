#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long n;
    double root = sqrt(5.0);

    cin >> n;

    cout << fixed << setprecision(1) << (pow((1.0 + root) / 2.0, n) - pow((1.0 - root) / 2.0, n)) / (root) << endl;

    return 0;
}
