#include <iostream>
#include <math.h>

using namespace std;

int main(void) {
    int a, b, c, result;
    
    while (cin >> a >> b >> c) {
        result = sqrt(a * b * 100.0 / c);
        cout << result << endl;
    }
    return 0;
}