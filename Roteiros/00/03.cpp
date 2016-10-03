/**
 * Problem: FATORIA2 - Fatorial
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/FATORIA2/
 * 
 * Author: Emerson Jair
 * Date: 6/7/2016
 */
 
#include <bits/stdc++.h>

using namespace std;

long fat(int);

int main(int argc, char *argv[]) {
    int n;
    
    cin >> n;
    
    cout << fat(n) << endl;
    
    return 0;
}

long fat(int n) {
    if (n <= 1)
        return 1;
    return n * fat(n - 1);
}
