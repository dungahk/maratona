#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int x1, y1, x2, y2, moves;
    
    while (cin >> x1 >> y1 >> x2 >> y2, x1 != 0) {
        if (x1 == x2 && y1 == y2)
            moves = 0;
        else if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2))
            moves = 1;
        else
            moves = 2;
            
        cout << moves << endl;
    }
    
    return 0;
}
