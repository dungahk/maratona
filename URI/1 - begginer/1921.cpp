#include <iostream>

using namespace std;

int main(void) {
    unsigned long long int n, a;
    long double b;
    
    cin >> n;
    
    a = n - 3;
    b = ((double) n ) / 2.0;
    b *= (double) a;
    a = b;
    
    cout << a << endl;
    return 0;
}