#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long t, l, c, p, match;
    string aux;
    vector<string> puzzle;

    cin >> t;

    for (int z = 0; z < t; z++) {
        cin >> l >> c;

        for (int i = 0; i < l; i++) {
            cin >> aux;
            puzzle.push_back(aux);
        }
        for (int i = 0; i < c; i++) {
            aux.clear();
            for (int j = 0; j < l; j++) {
                aux.push_back(puzzle[j][i]);
            }
            puzzle.push_back(aux);
        }

        cin >> p;

        for (int i = 0; i < p; i++) {
            cin >> aux;
            match = 0;
            for (int j = 0; j < puzzle.size(); j++) {
                for (int k = 0; k < puzzle[j].size() - aux.size() + 1; k++) {
                    // cout << aux << " - " << puzzle[j].substr(k, aux.size()) << endl;
                    if (aux.compare(puzzle[j].substr(k, aux.size())) == 0)
                        match++;
                }
            }
            if (aux.size() == 1)
                match /= 2;

            cout << match << endl;
        }
        puzzle.clear();
    }

    return 0;
}
