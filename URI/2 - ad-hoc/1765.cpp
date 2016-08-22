#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, a;
    double b, c;
    
    while (cin >> n, n != 0) {
        for (int i = 0; i < n; i++) {
            cin >> a >> b >> c;
            cout << "Size #" << i + 1 << ":" << endl;
            cout << "Ice Cream Used: " << fixed << setprecision(2) << a * (b + c) / 2.0 * 5.0 << " cm2" << endl;
        }
        cout << endl;
    }
    
    return 0;
}
