#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, pos;
    string ordem;
    
    while (cin >> n, n != 0) {
        pos = 0;
        cin >> ordem;
        for (int i = 0; i < n; i++) {
            if (ordem[i] == 'D')
                pos++;
            else {
                pos--;
                if (pos < 0)
                    pos += 4;
            }
        }
        
        // cout << "pos = " << pos << " pos mod 4 = " << pos % 4 << endl;
        
        if (pos % 4 == 0)
            cout << 'N' << endl;
        else if (pos % 4 == 1)
            cout << 'L' << endl;
        else if (pos % 4 == 2)
            cout << 'S' << endl;
        else
            cout << 'O' << endl;
    }
    
    return 0;
}
