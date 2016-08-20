#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, a, b, fall = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (fall == 0 && i != 0 && a < b)
            fall = i + 1;
        b = a;
    }
    
    cout << fall << endl;
    
    return 0;
}