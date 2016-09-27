#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, k, dois, tres, quatro, cinco;
    
    dois = tres = quatro = cinco = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> k;
        if (k % 2 == 0)
            dois++;
        if (k % 3 == 0)
            tres++;
        if (k % 4 == 0)
            quatro++;
        if (k % 5 == 0)
            cinco++;
    }
    
    cout << dois << " Multiplo(s) de 2" << endl;
    cout << tres << " Multiplo(s) de 3" << endl;
    cout << quatro << " Multiplo(s) de 4" << endl;
    cout << cinco << " Multiplo(s) de 5" << endl;
    
    return 0;
}
