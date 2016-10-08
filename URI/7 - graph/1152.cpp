#include <bits/stdc++.h>

using namespace std;

#define MAX 200000

void zera(int M[MAX][MAX], int size);

int main(int argc, char *argv[]) {
    int V, E, x, y, z, j;
    int M[MAX][MAX];
    
    while (cin >> V >> E, V != 0) {
        cout << "V: " << V << " E: " << E << endl;
        zera(M, V);
        for (int i = 0; i < E; i++) {
            cout << i << " ";
            j = i; // nao funciona sem isso
            cout << i << " ";
            cin >> x >> y >> z;
            M[x - 1][y - 1] = z;
            M[y - 1][x - 1] = z;
            cout << i << " ";
            // i = j;
            cout << i << endl;
        }
    }
    return 0;
}

void zera(int M[MAX][MAX], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            M[i][j] = -1;
        }
    }
}