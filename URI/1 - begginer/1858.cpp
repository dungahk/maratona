#include <iostream>

using namespace std;

int main(void) {
    int n, menor = 50, k = -1, a;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a < menor) {
            menor = a;
            k = i + 1;
        }
    }
    
    cout << k << endl;
    
    return 0;
}