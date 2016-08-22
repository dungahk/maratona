#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, a, b, p1, p2;
    
    while (cin >> n, n != 0) {
        p1 = p2 = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            if (a > b)
                p1++;
            else if (b > a)
                p2++;
        }
        
        cout << p1 << " " << p2 << endl;
    }
    return 0;
}