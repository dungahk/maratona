#include <bits/stdc++.h>

#define _ ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main(int argc, char *argv[]) { _
    ll temp, maior, menor, sum, m;
    ull n, qtd, test = 1;
    vector<ll> t;
    
    cin >> n >> m;
    
    while (!(n == 0 && m == 0)) {
        maior = LLONG_MIN;
        menor = LLONG_MAX;
        qtd = 0;
        sum = 0;
        for (int i = 0; i < n; i++) {
            if (qtd == m) {
                if (i > m) {
                    sum -= t[i - m - 1];
                }
                if (sum > maior) {
                    maior = sum;
                }
                if (sum < menor) {
                    menor = sum;
                }
            }
            else {
                qtd++;
            }
            cin >> temp;
            t.push_back(temp);
            sum += temp;
        }
        if (qtd == m) {
            if (n > m) {
                sum -= t[n - m - 1];
            }
            if (sum > maior) {
                maior = sum;
            }
            if (sum < menor) {
                menor = sum;
            }
        }
        
        cout << "Teste " << test++ << endl;
        cout << menor / m << " " << maior / m << endl;
        
        cout << endl;
        
        t.clear();
        cin >> n >> m;
    }
    
    return 0;
}
