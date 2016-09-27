#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, pos, dead, k, i;
    vector<bool> people;
    string input;

    while (cin >> input) {
        n = (input[0] - '0') * 10 + input[1] - '0';
        k = input[3] - '0';
        for (i = 0; i < k; i++) {
            n *= 10;
        }

        if (n != 0) {
            // cout << "N: " << n << endl;

            people.assign(n, true);

            dead = 0;
            i = -1;
            while (dead < n - 1) {
                pos = 0;
                while (pos < 2) {
                    i = (i + 1) % n;
                    if (people[i]) {
                        pos++;
                    }

                }
                people[i] = false;
                dead++;
            }

            for (int i = 0; i < n; i++) {
                if (people[i])
                    cout << i + 1 << endl;
            }

            // cout << endl << endl;
            people.clear();
        }
    }
    return 0;
}
