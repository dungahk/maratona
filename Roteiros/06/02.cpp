/**
 * Problem: ENGARRAF - Engarrafamento
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/ENGARRAF/
 *
 * Author: Emerson Jair
 * Date: 7/18/2016
 */

#include <bits/stdc++.h>

using namespace std;

#define MAX 112
#define MAX_STREET 1123

int caminho(int Mapa[MAX][MAX], int n, int start, int end);

int main(int argc, char *argv[]) {
    int n, m, a, b, c, Mapa[MAX][MAX], start, end;

    while (cin >> n >> m, n != 0) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                Mapa[i][j] = MAX_STREET;
            }
            Mapa[i][i] = 0;
        }
        for (int i = 0; i < m; i++) {
            cin >> a >> b >> c;
            Mapa[a - 1][b - 1] = c;
        }
        cin >> start >> end;
        cout << caminho(Mapa, n, start - 1, end - 1) << endl;
    }

    return 0;
}

int caminho(int Mapa[MAX][MAX], int n, int start, int end) {
    int distance[MAX], previous[MAX];
    for (int i = 0; i < n; i++) {
        distance[i] = MAX_STREET;
        previous[i] = -1;
    }
    distance[start] = 0;

    if (distance[end] == MAX_STREET)
        return -1;
    return distance[end];
}
