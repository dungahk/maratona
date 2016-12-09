#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    int a, v, a1, a2, maior, test = 1, ultimo;
    vector<int> voos;
    
    cin >> a >> v;
    
    while (!(a == 0 && v == 0)) {
        voos.assign(a, 0);
        maior = 0;
        for (int i = 0; i < v; i++) {
            cin >> a1 >> a2;
            voos[a1 - 1]++;
            voos[a2 - 1]++;
            if (voos[a1 - 1] > maior)
                maior = voos[a1 - 1];
            if (voos[a2 - 1] > maior)
                maior = voos[a2 - 1];
        }
        
        cout << "Teste " << test++ << endl;
        for (int i = 0; i < a; i++) {
            if (voos[i] == maior)
                cout << i + 1 << " ";
        }
        
        cout << endl;
        
        // for (int i = 0; i < a; i++) {
        //     if (voos[i] == maior)
        //         ultimo = i;
        // }
        
        // for (int i = 0; i < a; i++) {
        //     if (voos[i] == maior)
        //         if (i == ultimo)
        //             cout << i + 1 << endl;
        //         else
        //             cout << i + 1 << " ";
        // }
        
        cout << endl;
        
        cin >> a >> v;
    }
    
    return 0;
}
