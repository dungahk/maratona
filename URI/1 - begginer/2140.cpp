#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, m, k, bills[6];
    
    cin >> n >> m;
    
    while (!(n == 0 && m == 0)) {
        for (int i = 0; i < 6; i++) {
            bills[i] = 0;
        }
        k = m - n;
        // cout << k << endl;
        bills[0] = k / 100;
        k = k % 100;
        bills[1] = k / 50;
        k = k % 50;
        bills[2] = k / 20;
        k = k % 20;
        bills[3]  = k / 10;
        k = k % 10;
        bills[4] = k / 5;
        k = k % 5;
        bills[5] = k / 2;
        k = k % 2;
        k = 0;
        for (int i = 0; i < 6; i++) {
            // cout << bills[i] << " ";
            k += bills[i];
        }
        // cout << endl;
        if (k == 2)
            cout << "possible" << endl;
        else
            cout << "impossible" << endl;
            
        cin >> n >> m;
    }
    return 0;
}