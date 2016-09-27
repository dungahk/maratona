#include <bits/stdc++.h>

using namespace std;

#define MAX 100001

void zera_matriz();

int dep[MAX][MAX];

int main(int argc, char *argv[]) {
    int n, n1, n2, d, x, y, changes, i, dvd, dvd_novo, inst_amount;
    // int dep[MAX][MAX];
    vector<int> qtd;
    // vector<list<int> > packages;
    vector<bool> installed;
    // list<int> aux;

    while (cin >> n1 >> n2 >> d, n1 != 0) {
        zera_matriz();
        n = n1 + n2;
        qtd.assign(n, 0);
        installed.assign(n, false);
        // packages.assign(n, aux);
        inst_amount = 0;
        changes = 2;
        for (i = 0; i < d; i++) {
            cin >> x >> y;
            dep[x - 1][y - 1] = 1;
            qtd[x - 1]++;
        }

        i = 0;
        while (inst_amount < n) {
            dvd = 2;
            if (i < n1)
                dvd = 1;

            if (!installed[i] && qtd[i] == 0) {
                installed[i] = true;
                inst_amount++;
                for (int j = 0; j < n; j++) {
                    if (dep[j][i] > 0)
                        qtd[j]--;
                    dep[j][i] = 0;
                }
            }
            else {
                for (int j = 0; j < n; j++) {
                    if (dep[i][j] == 1 && qtd[j] == 0 && !installed[j]) {
                        if (dvd == 1 && j < n1) {
                            installed[j] = true;
                            inst_amount++;
                            for (int k = 0; k < n; k++) {
                                if (dep[k][j] > 0)
                                    qtd[k]--;
                                dep[k][j] = 0;
                            }
                        }
                    }
                }
            }

            i = (i + 1) % n;
            dvd_novo = 2;
            if (dvd_novo < n1)
                dvd_novo = 1;
            if (dvd != dvd_novo)
                changes++;
        }

        // for (int i = 0; i < n; i++) {
        //     cout << i + 1 << ": ";
        //     for (int j = 0; j < packages[i].size(); j++) {
        //         cout << packages[i].front() + 1 << " ";
        //         packages[i].pop_front();
        //     }
        //     cout << endl;
        // }
        // cout << endl;

        // i = 0;
        // while (inst_amount < n) {
        //     dvd = 2;
        //     if (i < n1)
        //         dvd = 1;

        //     if (packages[i].size() == 0 && !installed[i]) {
        //         installed[i] = true;
        //         inst_amount++;
        //         cout << "Package " << i + 1 << " installed\n";
        //     }
        //     else {
        //         for (int j = 0; j < packages[i].size(); j++) {
        //             if (packages[packages[i].front()].size() == 0 && !installed[packages[i].front()]) {
        //                 if (dvd == 1 && packages[i].front() < n1) {
        //                     installed[packages[i].front()] = true;
        //                     inst_amount++;
        //                     packages[i].pop_front();
        //                     cout << "Package " << packages[i].front() + 1 << " installed\n";
        //                 }
        //                 else if (dvd == 2 && packages[i].front() >= n1) {
        //                     installed[packages[i].front()] = true;
        //                     inst_amount++;
        //                     packages[i].pop_front();
        //                     cout << "Package " << packages[i].front() + 1 << " installed\n";
        //                 }
        //             }
        //             packages[i].push_back(packages[i].front());
        //             packages[i].pop_front();
        //         }
        //     }
        //     i = (i + 1) % n;
        //     dvd_novo = 2;
        //     if (dvd_novo < n1)
        //         dvd_novo = 1;
        //     if (dvd != dvd_novo)
        //         changes++;
        // }

        // cout << "\n\nINSTALLED\n";
        // for (int i = 0; i < n; i++) {
        //     if (installed[i])
        //         cout << "Package " << i + 1 << " installed\n";
        //     else
        //         cout << "Package " << i + 1 << " not installed\n";
        // }

        cout << changes << endl;
        // packages.clear();
        installed.clear();
    }
    return 0;
}

void zera_matriz() {
    for (int i = 0; i < MAX; i++) {
        for (int j = 0; j < MAX; j++) {
            dep[i][j] = 0;
        }
    }

    return;
}
