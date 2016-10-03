#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, pac, toys, weight, packages;
    vector<int> q, w;
    
    cin >> n;
    
    for (int z = 0; z < n; z++) {
        toys = 0;
        weight = 0;
        packages = 0;
        cin >> pac;
        for (int i = 0; i < pac; i++) {
            cin >> a >> b;
            q.push_back(a);
            w.push_back(b);
        }
        
        
        
        cout << toys << " brinquedos\n";
        cout << "Peso: " << weight << " kg\n";
        cout << "sobra(m) " << packages << " pacote(s)\n\n";
    }
    return 0;
}