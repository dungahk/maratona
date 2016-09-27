/**
 * Problem: OBIHANOI - Torres de Hanói
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/OBIHANOI/
 * 
 * Author: Emerson Jair
 * Date: 6/9/2016
 */
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(int argc, char *argv[]) {
    int n, teste = 1, hanoi;
    
    while (cin >> n, n != 0) {
        cout << "Teste " << teste++ << endl;
        hanoi = pow(2, n) - 1;
        cout << hanoi << endl << endl;
    }
    
    return 0;
}
