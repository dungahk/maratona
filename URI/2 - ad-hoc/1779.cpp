#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    int n, length, t, grade, maior, best;
    vector<int> v;

    cin >> t;

    for (int z = 0; z < t; z++) {
        cin >> n;

        length = 0;
        maior = -1;
        best = 0;

        for (int i = 0; i < n; i++) {
            cin >> grade;
            // cout << grade << " ";
            // if (grade >= maior) {
            //     maior = grade;
            //     length = 1;
            //     while (++i < n) {
            //         cin >> grade;
            //         if (grade == maior)
            //             length++;
            //         cout << grade << "w ";
            //     }
            //     // i--;
            //     if (length > best) {
            //         best = length;
            //     }
            // }
            v.push_back(grade);
            if (grade > maior)
                maior = grade;
        }

        length = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == maior) {
                length++;
            }
            else {
                if (length > best)
                    best = length;
                length = 0;
            }
        }

        if (length > best)
            best = length;

        cout << "Caso #" << z + 1 << ": " << best;
        cout << endl;

        v.clear();
    }

    return 0;
}
