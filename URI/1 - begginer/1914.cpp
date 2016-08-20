#include <iostream>

using namespace std;

int main(void) {
    long int n, a, b, c;
    string Person1, Choice1, Person2, Choice2;
    
    cin >> n;
    
    for (long int i = 0; i < n; i++) {
        cin >> Person1 >> Choice1 >> Person2 >> Choice2;
        cin >> a >> b;
        a = a % 2;
        b = b % 2;
        c = (a + b) % 2;
        if (c == 0) {
            if (Choice1.compare("PAR") == 0)
                cout << Person1 << endl;
            else
                cout << Person2 << endl;
        }
        else {
            if (Choice1.compare("IMPAR") == 0)
                cout << Person1 << endl;
            else
                cout << Person2 << endl;
        }
    }
    return 0;
}