#include <iostream>

using namespace std;

int main(void) {
    int n, m;
    string k;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> k >> m;
        if (k.compare("Thor") == 0)
            cout << "Y\n";
        else
            cout << "N\n";
    }
    return 0;
}