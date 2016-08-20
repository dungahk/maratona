#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]){
    long long n, hour, min, door;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> hour >> min >> door;
        if (door)
            cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << " - " << "A porta abriu!" << endl;
        else
            cout << setfill('0') << setw(2) << hour << ":" << setfill('0') << setw(2) << min << " - " << "A porta fechou!" << endl;
    }
    
    return 0;
}