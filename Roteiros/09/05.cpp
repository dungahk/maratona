/**
 * Problem: 10210 - Romeo and Juliet !
 * Judge: UVa Online Judge
 * Link: https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=1151
 * 
 * Author: Emerson Jair
 * Date: 8/9/2016
 */
 
#include <bits/stdc++.h>

using namespace std;

double degreeToRad(double degree);

double distance(double x, double y, double a, double b);

int main(int argc, char *argv[]) {
    double xa, ya, xb, yb, CMD, ENF, f, AB, x, y;
    
    while (cin >> xa >> ya >> xb >> yb >> CMD >> ENF) {
        AB = distance(xa, ya, xb, yb);
        x = AB / tan(degreeToRad(CMD));
        y = AB / tan(degreeToRad(ENF));
        f = x + y;
        cout << fixed << setprecision(3) << f << endl;
    }
    
    return 0;
}

double degreeToRad(double degree) {
    return M_PI * degree / 180.0;
}

double distance(double x, double y, double a, double b) {
    return sqrt((a - x) * (a - x) + (b - y) * (b - y));
}