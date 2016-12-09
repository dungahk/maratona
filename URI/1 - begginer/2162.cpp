#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, a, b, maior, result = 1;
    
    cin >> n;
    
    cin >> a >> b;
    
    if (b > a) {
        maior = 1;
    }
    else if (b < a)
        maior = 0;
    else {
        result = 0;
    }
    
    a = b;
    
    if (result)
    for (int i = 2; i < n; i++) {
        cin >> b;
        if (result) {
            if (maior) {
                if (b >= a) {
                    result = 0;
                }
            }
            else {
                if (b <= a) {
                    result = 0;
                }
            }
            maior = 1 - maior;
            a = b;
        }
    }
    
    cout << result << endl;
    
    return 0;
}