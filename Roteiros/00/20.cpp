/**
 * Problem: MINHOCA - Campo de Minhocas
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/MINHOCA/
 * 
 * Author: Emerson Jair
 * Date: 6/9/2016
 */
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(int argc, char *argv[]) {
    int n, m, col[100] = {0}, greatest = -1, row, num;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        row = 0;
        for (int j = 0; j < m; j++) {
            cin >> num;
            row += num;
            col[j] += num;
        }
        if (row > greatest)
            greatest = row;
    }
    
    for (int j = 0; j < m; j++) {
        if (col[j] > greatest)
            greatest = col[j];
    }
    
    cout << greatest << endl;
    
    return 0;
}
