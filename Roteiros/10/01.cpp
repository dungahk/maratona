/**
 * Problem: BICHO - Jogo do bicho
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/BICHO/
 * 
 * Author: Emerson Jair
 * Date: 8/11/2016
 */
 
#include <bits/stdc++.h>
using namespace std;

int group(int);

int main(int argc, char *argv[]) {
    int n, m;
    double v, prize;
    
    cin >> v >> n >> m;
    
    while (!(v == 0.0 && n == 0 && m == 0)) {
        if (m % 10000 == n % 10000)
            prize = v * 3000.0;
        else if (m % 1000 == n % 1000)
            prize = v * 500.0;
        else if (m % 100 == n % 100)
            prize = v * 50.0;
        else if (group(m) == group(n))
            prize = v * 16.0;
        else
            prize = 0.0;
        
        cout << fixed << setprecision(2) << prize << endl;
        cin >> v >> n >> m;
    }
    
    return 0;
}

int group(int n) {
    n = n % 100;
    if (n == 0)
        return 25;
    if (n % 4 == 0)
        return n / 4;
    return n / 4 + 1;
}