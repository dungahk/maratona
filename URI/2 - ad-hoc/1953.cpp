#include <iostream>

using namespace std;

int main(void) {
    int n, a, EPR, EHD, INTRUSOS;
    string b;
    while (cin >> n) {
        EPR = 0;
        EHD = 0;
        INTRUSOS = 0;
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            if (b.compare("EPR") == 0)
                EPR++;
            else if (b.compare("EHD") == 0)
                EHD++;
            else
                INTRUSOS++;
        }
        cout << "EPR: " << EPR << endl;
        cout << "EHD: " << EHD << endl;
        cout << "INTRUSOS: " << INTRUSOS << endl;
    }
    return 0;
}