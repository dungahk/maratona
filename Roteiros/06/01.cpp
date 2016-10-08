/**
 * Problem: CONTAGEM - Não é Mais um Joguinho Canadense
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/CONTAGEM/
 * 
 * Author: Emerson Jair
 * Date: 7/18/2016
 */
 
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

long long contagem(string);

int main(int argc, char *argv[]) {
    int instance = 0;
    string palavra;
    
    while (cin >> palavra) {
        cout << "Palavra " << ++instance << endl;
        cout << contagem(palavra) << endl << endl;
    }
    
    return 0;
}

long long contagem(string palavra) {
    long long cost = 0;
    for (int i = 0; i < palavra.size(); i++) {
        if (palavra[i] == 'b') {
            cost += pow(2, palavra.size() - i - 1);
        }
    }
    return cost;
}