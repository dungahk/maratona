/**
 * Problem: PAR - Par ou ímpar
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/PAR/
 * 
 * Author: Emerson Jair
 * Date: 6/7/2016
 */
 
#include <iostream>
 
using namespace std;
 
int main(int argc, char *argv[]) {
    int n, teste = 1, a, b;
    string nome1, nome2;
    
    while (cin >> n, n != 0) {
        cout << "Teste " << teste++ << endl;
        cin >> nome1 >> nome2;
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            if ((a + b) % 2)
                cout << nome2 << endl;
            else
                cout << nome1 << endl;
        }
        cout << endl;
    }
    
    return 0;
}
