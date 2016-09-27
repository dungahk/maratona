#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, id, chosen_id;
    double nota, chosen_nota = 0.0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> id >> nota;
        if (nota > chosen_nota) {
            chosen_nota = nota;
            chosen_id = id;
        }
    }
    
    if (chosen_nota >= 8.0)
        cout << chosen_id << endl;
    else
        cout << "Minimum note not reached\n";
        
    return 0;
}