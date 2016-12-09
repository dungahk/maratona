#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, m[5][5], caso = 0;
    string a, b;
    map<string,int> mapa;
    
    mapa.insert(pair<string,int>("pedra", 0));
    mapa.insert(pair<string,int>("papel", 1));
    mapa.insert(pair<string,int>("tesoura", 2));
    mapa.insert(pair<string,int>("lagarto", 3));
    mapa.insert(pair<string,int>("Spock", 4));
    
    m[2][1] = 1; m[1][2] = -1;
    
    m[1][0] = 1; m[0][1] = -1;
    
    m[0][3] = 1; m[3][0] = -1;
    
    m[3][4] = 1; m[4][3] = -1;
    
    m[4][2] = 1; m[2][4] = -1;
    
    m[2][3] = 1; m[3][2] = -1;
    
    m[3][1] = 1; m[1][3] = -1;
    
    m[1][4] = 1; m[4][1] = -1;
    
    m[4][0] = 1; m[0][4] = -1;
    
    m[0][2] = 1; m[2][0] = -1;
    
    for (int i = 0; i < 5; i++) {
        m[i][i] = 0;
    }
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (m[mapa[a]][mapa[b]] == 1)
            cout << "Caso #" << ++caso << ": Bazinga!\n";
        else if (m[mapa[a]][mapa[b]] == 0)
            cout << "Caso #" << ++caso << ": De novo!\n";
        else
            cout << "Caso #" << ++caso << ": Raj trapaceou!\n";
    }
    return 0;
}