/**
 * Problem: RECUPERA - Recuperação
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/RECUPERA/
 * 
 * Author: Emerson Jair
 * Date: 6/9/2016
 */
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(int argc, char *argv[]) {
    int n, a, sum, inst = 1, num;
    bool achei;
    
    while (cin >> n) {
        sum = 0;
        achei = false;
        for (int i = 0; i < n; i++) {
            cin >> a;
            if (!achei && a == sum) {
                num = a;
                achei = true;
            }
            sum += a;
        }
        cout << "Instancia " << inst++ << endl;
        if (achei)
            cout << num << endl << endl;
        else
            cout << "nao achei\n\n";
    }
    
    return 0;
}
