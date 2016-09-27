#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, m;
    string action;
    
    cin >> n >> m;
    
    for (int i = 0; i < m; i++) {
        cin >> action;
        
        if (action.compare("fechou") == 0)
            n++;
        else
            n--;
    }
    
    cout << n << endl;
    
    return 0;
}
