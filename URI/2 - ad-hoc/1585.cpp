#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, a, b;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        
        cout << a * b / 2 << " cm2" << endl;
    }
    
    return 0;
}
