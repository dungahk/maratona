#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, m, c, i, j, mapa[200][200], dir, visitados[200][200];
    bool valid = true, chest = false;
    
    cin >> m >> n;
    c = getc(stdin);
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            mapa[i][j] = getc(stdin);
            visitados[i][j] = 0;
            // cout << (char)c;
            // if (c != '<' && c != '>' && c != '^' && c != 'v' && c != '.' && c != '*')
            //     valid = false;
            // if (c == '*')
            //     chest = true;
            // else if (c == '<' && j == 0)
            //     valid = false;
            // else if (c == '>' && j == m - 1)
            //     valid = false;
            // else if (c == '^' && i == 0)
            //     valid = false;
            // else if (c == 'v' && i == n - 1)
            //     valid = false;
        }
        c = getc(stdin);
        // cout << (char)c;
    }
    
    i = 0; j = 0; dir = 0;
    
    while (valid && !chest) {
        if (visitados[i][j] == 1)
            valid = false;
        else {
            visitados[i][j] = 1;
            if (mapa[i][j] == '*')
                chest = true;
            else {
                if (mapa[i][j] == '>')
                    dir = 0;
                else if (mapa[i][j] == '<')
                    dir = 1;
                else if (mapa[i][j] == '^')
                    dir = 2;
                else if (mapa[i][j] == 'v')
                    dir = 3;
                
                if (dir == 0)
                    j++;
                else if (dir == 1)
                    j--;
                else if (dir == 2)
                    i--;
                else
                    i++;
                
                if (j < 0 || j > m || i < 0 || i > n)
                    valid = false;
            }
        }
    }
    
    if (chest)
        cout << "*\n";
    else
        cout << "!\n";
    return 0;
}