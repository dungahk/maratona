#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    long long h1, m1, h2, m2, min;
    
    cin >> h1 >> m1 >> h2 >> m2;
    
    while (!(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)) {
        if (h2 == h1) {
            if (m2 >= m1)
                min = m2 - m1;
            else
                min = h2 * 60 + m2 + 60 - m1 + 60 * (24 - h1 - 1);
        }
        else if (h2 > h1) {
            min = 60 - m1 + 60 * (h2 - h1 - 1) + m2;
        }
        else {
            min = h2 * 60 + m2 + 60 - m1 + 60 * (24 - h1 - 1);
        }
        
        cout << min << endl;
        
        cin >> h1 >> m1 >> h2 >> m2;
    }
    
    return 0;
}
