#include <iostream>

using namespace std;

int main(void) {
    int n, pos, steps;
    
    cin >> n;
    
    pos = 2;
    steps = 1;
    
    while (pos != 1) {
        if (pos <= n / 2)
            pos *= 2;
        else
            pos = 2 * pos - n - 1;
        steps++;
    }
    cout << steps << endl;
    return 0;
}