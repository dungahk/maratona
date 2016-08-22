#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, k, mary, john;
    
    while (cin >> n, n != 0) {
        mary = 0;
        john = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> k;
            if (k)
                john++;
            else
                mary++;
        }
        
        cout << "Mary won " << mary << " times and John won " << john << " times" << endl;
    }
    
    return 0;
}
