#include <iostream>

using namespace std;

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int mdc(int, int);

int main(void) {
    int n, a, b;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cout << mdc(a, b) << endl;
    }
    return 0;
}

int mdc(int a, int b) {
    if (a % b == 0)
        return MIN(a, b);
    return mdc(b, a % b);
}