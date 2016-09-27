#include <bits/stdc++.h>

using namespace std;

// double pascal[5000][5000];
int main(void) {
    int n, j, dois;
    double fat = 1.0;

    cin >> n;

    dois = n - 1;
    j = (n - 1) / 2;
    for (int i = (n - 1) / 2 + 1; i <= n - 1; i++) {
        if (j == 0)
            cout << "ZZEROOOOOOOOOOOOOO\n";
        fat = fat / (double)j;
        fat = fat * (double)i;
        j--;
        if (dois-- > 0)
            fat = fat / 2.0;
        cout << fat << endl;
    }

    while (dois-- > 0)
        fat = fat / 2.0;
    // cout << j << endl;
    // fat /= j;

    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j <= i; j++) {
    //         if (i == 0 && j == 0)
    //             pascal[i][j] = 1.0;
    //         else if (j == 0 || j == i)
    //             pascal[i][j] = pascal[i - 1][0] / 2.0;
    //         else
    //             pascal[i][j] = pascal[i - 1][j - 1]/2.0 + pascal[i - 1][j]/2.0;
    //     }
    // }

    cout << fixed << setprecision(2) << 100.0 * fat << endl;

    return 0;
}
