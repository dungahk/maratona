#include <bits/stdc++.h>

using namespace std;

bool prime(long);

int main(void) {
    int n, k;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> k;
        if (prime(k))
            cout << "Prime\n";
        else
            cout << "Not Prime\n";
    }
    return 0;
}

bool prime(long k) {
    int raiz = sqrt(k) + 1;
    if (k == 1)
        return false;
    if (k == 2)
        return true;
    if (k % 2 == 0)
        return false;
    if (k == 3)
        return true;
    if (k % 3 == 0)
        return false;

    for (int i = 5; i < raiz; i++) {
        if (k % i++ == 0)
            return false;
    }

    return true;
}
