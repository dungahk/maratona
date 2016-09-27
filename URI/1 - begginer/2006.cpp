#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long tea, k, q = 0;
    
    cin >> tea;
    
    for (int i = 0; i < 5; i++) {
        cin >> k;
        if (k == tea)
            q++;
    }
    
    cout << q << endl;
    
    return 0;
}
