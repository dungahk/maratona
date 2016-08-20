#include <iostream>

using namespace std;

int main(void) {
    int n, m = 0, p1 = 0, p2 = 0, p3 = 0, p4 = 0, instance = 0;
    
    while (cin >> n, n != 0) {
        if (instance != 0)
            cout << endl;
        cout << "Instancia " << ++instance << endl;
        cout << m << " " << p1 << " " << p2 << " " << p3 << " " << p4 << endl;
    }
    return 0;
}