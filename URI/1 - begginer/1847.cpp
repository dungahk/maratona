#include <iostream>

using namespace std;

int main(void) {
    int a, b, c;
    
    cin >> a >> b >> c;
    
    cout << ":";
    
    if (a > b) {
        if (b <= c)
            cout << ")";
        else if (b > c) {
            if (a - b > b - c)
                cout << ")";
            else
                cout << "(";
        }
    }
    else if (a < b) {
        if (b >= c)
            cout << "(";
        else if (b < c) {
            if (b - a > c - b)
                cout << "(";
            else
                cout << ")";
        }
    }
    else {
        if (b < c)
            cout << ")";
        else
            cout << "(";
    }
    
    cout << endl;
    
    return 0;
}