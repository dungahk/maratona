#include <bits/stdc++.h>

using namespace std;

#define INT_MAX 2000

void floyd(int G[1000][1000], int n);
void print(int G[1000][1000], int n);

int main(int argc, char *argv[]) {
    int n, e, x, y, h, k, o, d, grafo[1000][1000];
    
    while (cin >> n >> e, n != 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                grafo[i][j] = INT_MAX;
            }
            grafo[i][i] = 0;
        }
        for (int i = 0; i < e; i++) {
            cin >> x >> y >> h;
            grafo[x - 1][y - 1] = h;
            if (grafo[y - 1][x - 1] != INT_MAX)
                grafo[x - 1][y - 1] = grafo[y - 1][x - 1] = 0;
        }
        
        // cout << "Antes do floyd:\n";
        // print(grafo, n);
        
        floyd(grafo, n);
        
        // cout << "Depois do floyd:\n";
        // print(grafo, n);
        
        cin >> k;
        for (int i = 0; i < k; i++) {
            cin >> o >> d;
            if (grafo[o - 1][d - 1] == INT_MAX)
                cout << "Nao e possivel entregar a carta\n";
            else
                cout << grafo[o - 1][d - 1] << endl;
        }
        
        cout << endl;
    }
    return 0;
}

void floyd(int G[1000][1000], int n) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (G[i][j] > G[i][k] + G[k][j])
                    G[i][j] = G[i][k] + G[k][j];
            }
        }
    }
}

void print(int G[1000][1000], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << G[i][j] << " ";
        }
        cout << endl;
    }
}