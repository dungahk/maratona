#include <iostream>

using namespace std;

int main(void) {
    int n, k;
    
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                k = n / 3;
                if (i == n / 2 && j == n / 2)
                    cout << 4;
                else if (i >= k && j >= k && i < n - k && j < n - k)
                    cout << 1;
                else if (i == j)
                    cout << 2;
                else if (n - i == j + 1)
                    cout << 3;
                else
                    cout << 0;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}