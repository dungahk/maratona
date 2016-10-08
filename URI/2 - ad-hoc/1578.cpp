#include <bits/stdc++.h>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

#define MAX 21

int main(int argc, char *argv[]) {
    unsigned long long n, m, k, matriz[MAX][MAX], test = 4;
    vector<int> fill;
    string number;
    
    cin >> n;
    
    for (int z = 0; z < n; z++) {
        if (z > 0)
            cout << endl;
        cin >> m;
        
        fill.assign(m, 0);
        
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m; j++) {
                cin >> k;
                matriz[i][j] = k * k;
                
                number = to_string(matriz[i][j]);
                if (number.size() > fill[j])
                    fill[j] = number.size();
            }
        }
        
        cout << "Quadrado da matriz #" << test++ << ":" << endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < m - 1; j++) {
                cout << setw(fill[j]) << matriz[i][j] << " ";
            }
            cout << setw(fill[m - 1]) << matriz[i][m - 1];
            cout << endl;
        }
    }
    
    return 0;
}
