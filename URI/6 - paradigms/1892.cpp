#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, b, qtd = 0;
    string a;
    vector<int> score;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        b = (a[0] - '0') * 10 + a[1] - '0';
        score.push_back(b);
        cout << b << endl;
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (i < j && score[i] > score[j])
                qtd++;
        }
    }
    
    cout << qtd << endl;
    
    return 0;
}