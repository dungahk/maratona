#include <bits/stdc++.h>

using namespace std;

int main(void) {
    map<string,double> listaDeCompras;
    string nomeFruta;
    int n, a, b, qtd;
    double preco, valor;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        valor = 0.0;
        
        cin >> a;
        for (int j = 0; j < a; j++) {
            cin >> nomeFruta >> preco;
            listaDeCompras.insert(pair<string,double>(nomeFruta, preco));
        }
        
        cin >> b;
        for (int j = 0; j < b; j++) {
            cin >> nomeFruta >> qtd;
            valor += listaDeCompras.find(nomeFruta)->second * (double)qtd;
        }
        
        cout << "R$ " << fixed << setprecision(2) << valor << endl;
        listaDeCompras.clear();
    }
    return 0;
}