#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    char c;
    long long n, m, color = 0;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> c;
            if (c == 'C' || c == 'M' || c == 'Y')
                color = 1;
        }
    }
    
    if (color)
        cout << "#Color" << endl;
    else
        cout << "#Black&White" << endl;
        
    return 0;
}
