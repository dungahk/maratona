#include <iostream>

using namespace std;

int main(){
    int c, n;
    
    cin >> c;
    for (int i = 0; i < c; i++) {
        cin >> n;
        cout << n % 2 << endl;
    }
}