/**
 * Problem: DAMA - Dama
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/DAMA/
 * 
 * Author: Emerson Jair
 * Date: 7/25/2016
 */
 
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    int x1, y1, x2, y2, steps;
    
    while (cin >> x1 >> y1 >> x2 >> y2, x1 != 0) {
        // cout << x1 << " " << y1
        if (x1 == x2 && y1 == y2)
            steps = 0;
        else if (x1 == x2 || y1 == y2 || x2 - x1 == y2 - y1 || x2 - x1 == y1 - y2)
            steps = 1;
        else
            steps = 2;
        cout << steps << endl;
    }
    
    return 0;
}
