#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    long long x, m;
    
    while (cin >> x >> m, x != 0) {
        cout << x * m << endl;
    }
    return 0;
}