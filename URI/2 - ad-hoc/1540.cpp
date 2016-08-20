#include <iostream>
#include <iomanip>

using namespace std;

int main(void) {
    long long int n, y1, y2, part_a, part_b;
    double c1, c2, result;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> y1 >> c1 >> y2 >> c2;
        result = (c2 - c1) / (y2 - y1);
        part_a = result;
        result *= 100.0;
        part_b = result;
        part_b %= 100;
        cout << part_a << "," << setfill('0') << setw(2) << part_b << endl;
    }
    
    return 0;
}