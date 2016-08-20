#include <iostream>

using namespace std;

long long int fat(long long int);

int main(void) {
    string n;
    
    cin >> n;
    
    while (n[0] != '0') {
        cout << fat(n.size()) << endl;
        cin >> n;
    }

    return 0;
}

long long int fat(long long int n) {
    long long int fat = 1;
    for (int i = 2; i < n + 1; i++) {
        fat *= i;
    }
    return fat;
}