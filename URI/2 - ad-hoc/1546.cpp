#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, k, code;
    const char *names[] = {"", "Rolien", "Naej", "Elehcim", "Odranoel"};
    
    cin >> n;
    
    for (int z = 0; z < n; z++) {
        cin >> k;
        
        for (int i = 0; i < k; i++) {
            cin >> code;
            // cout << code << endl;
            cout << names[code] << endl;
        }
    }
    
    return 0;
}
