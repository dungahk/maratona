/**
 * Problem: 11505 - Logo
 * Judge: UVa Online Judge
 * Link: https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2500
 * 
 * Author: Emerson Jair
 * Date: 8/9/2016
 */
 
#include <bits/stdc++.h>
#include <cmath>

using namespace std;

double degreeToRad(int degree);

int main(int argc, char *argv[]) {
    int n, commNumber, commArg, degree;
    double x, y;
    string commName;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        degree = 0;
        x = y = 0.0;
        cin >> commNumber;
        for (int j = 0; j < commNumber; j++) {
            cin >> commName >> commArg;
            
            switch (commName[0]) {
                case 'f':
                    x += commArg * sin(degreeToRad(degree));
                    y += commArg * cos(degreeToRad(degree));
                    break;
                case 'b':
                    x -= commArg * sin(degreeToRad(degree));
                    y -= commArg * cos(degreeToRad(degree));
                    break;
                case 'l':
                    degree += commArg;
                    break;
                case 'r':
                    degree -= commArg;
                    break;
            }
        }
        
        cout << (int) round(sqrt(x * x + y * y)) << endl;
    }
    
    return 0;
}

double degreeToRad(int degree) {
    return M_PI * degree / 180.0;
}
