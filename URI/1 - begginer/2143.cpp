#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, k;
    
    while (cin >> n, n != 0) {
        for (int i = 0; i < n; i++) {
            cin >> k;
            if (k % 2 == 0)
                cout << k + k - 2 << endl;
            else
                cout << k + k - 1 << endl;
        }
    }
    
    return 0;
}