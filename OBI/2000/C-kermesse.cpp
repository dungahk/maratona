#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, k, winner, test = 1;
    
    while (cin >> n, n != 0) {
        for (int i = 0; i < n; i++) {
            cin >> k;
            if (k == i + 1)
                winner = k;
        }
        cout << "Teste " << test++ << endl;
        cout << winner << endl << endl;
    }
    return 0;
}