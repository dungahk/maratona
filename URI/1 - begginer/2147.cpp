#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long n;
    string s;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> s;
        cout << fixed << setprecision(2) << s.size() * 0.01 << endl;
    }
    
    return 0;
}