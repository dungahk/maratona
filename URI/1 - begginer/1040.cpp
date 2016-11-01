#include <bits/stdc++.h>

using namespace std;

int main(void) {
    double n1, n2, n3, n4, n5;
    double media;
    
    cin >> n1 >> n2 >> n3 >> n4;
    
    media = (n1 * 2.0 + n2 * 3.0 + n3 * 4.0 + n4) / 10.0;
    
    cout << "Media: " << fixed << setprecision(1) << media << endl;
    
    if (media >= 7.0)
        cout << "Aluno aprovado.\n";
    else if (media < 5.0)
        cout << "Aluno reprovado.\n";
    else {
        cout << "Aluno em exame.\n";
        cin >> n5;
        cout << "Nota do exame: " << fixed << setprecision(1) << n5 << endl;
        media = (media + n5) / 2.0;
        if (media >= 5.0)
            cout << "Aluno aprovado.\n";
        else
            cout << "Aluno reprovado.\n";
        cout << "Media final: " << fixed << setprecision(1) << media << endl;
    }
    
    return 0;
}