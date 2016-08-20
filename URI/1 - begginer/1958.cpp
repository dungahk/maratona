#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    long double n;
    
    cin >> n;
    
    cout.precision(4);
    cout << showpos << uppercase << scientific << n << endl;
    
    return 0;
}
