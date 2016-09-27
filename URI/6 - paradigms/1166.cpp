#include <bits/stdc++.h>

using namespace std;

bool square_number(int);

int main(void) {
    int k, n, number;
    bool fits, encaixou;
    vector<int> pegs;

    cin >> k;

    for (int z = 0; z < k; z++) {
        cin >> n;
        pegs.assign(n, 0);

        fits = true;
        number = 1;

        while (fits) {
            encaixou = false;
            for (int i = 0; i < n && !encaixou; i++) {
                if (pegs[i] == 0) {
                    pegs[i] = number++;
                    encaixou = true;
                }
                else if (square_number(pegs[i] + number)) {
                    pegs[i] = number++;
                    encaixou = true;
                }
            }
            if (!encaixou)
                fits = false;
        }

        cout << number - 1 << endl;

        pegs.clear();
    }
    return 0;
}

bool square_number(int n) {
    double k = sqrt((double)n);
    int t = k;
    double m = t;
    m = k - m;
    return (m == 0);
}
