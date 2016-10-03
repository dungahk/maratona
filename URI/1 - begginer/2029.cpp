#include <bits/stdc++.h>

using namespace std;

#define PI 3.14

int main(int argc, char *argv[]) {
    double v, d, height, area;
    
    while (cin >> v >> d) {
        area = PI * d * d / 4.0;
        height = v / area;
        cout << "ALTURA = ";
        cout << fixed << setprecision(2) << height << endl;
        cout << "AREA = ";
        cout << fixed << setprecision(2) << area << endl;
    }
    
    return 0;
}
