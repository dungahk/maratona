/**
 * Problem: METEORO - Meteoros
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/METEORO/
 * 
 * Author: Emerson Jair
 * Date: 8/8/2016
 */
 
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    int x1, y1, x2, y2, test = 1, inside, n, a, b;
    
    cin >> x1 >> y1 >> x2 >> y2;
    while (!(x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)) {
        inside = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            if (a >= x1 && a <= x2 && b <= y1 && b >= y2)
                inside++;
        }
        cout << "Teste " << test++ << endl;
        cout << inside << endl << endl;
        
        cin >> x1 >> y1 >> x2 >> y2;
    }
    
    return 0;
}
