#include <bits/stdc++.h>

using namespace std;

#define MAX 112

int main(int argc, char *argv[]) {
    long long n, blocks[MAX][MAX];
    
    cin >> n;
    
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < n + 1; j++) {
            cin >> blocks[i][j];
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (blocks[i][j] + blocks[i][j + 1] + blocks[i + 1][j] + blocks[i + 1][j + 1] >= 2)
                cout << "S";
            else
                cout << "U";
        }
        cout << endl;
    }
    return 0;
}