#include <iostream>

using namespace std;

int main(void) {
    int n;
    string text("LIFE IS NOT A PROBLEM TO BE SOLVED");
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << text[i];
    }
    
    cout << endl;
    
    return 0;
}