/**
 * Problem: CALCADMG - Caminhando pela calçada
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/CALCADMG/
 * 
 * Author: Emerson Jair
 * Date: 8/11/2016
 */
 
#include <iostream>
#include <cstdlib>

using namespace std;

long long gcd(long long x, long long y);

int main(int argc, char *argv[]) {
    long long t, a, b, c, d, x, y, mdc, points;
    
    cin >> t;
    
    for (int z = 0; z < t; z++) {
        points = 0;
        cin >> a >> b >> c >> d;
        if (a == c && b == d)
            points = 1;
        else {
            x = abs(c - a);
            y = abs(d - b);
            mdc = gcd(x, y);
            // cout << "mdc" << mdc << endl;
            // x /= mdc;
            // y /= mdc;
            // int j = b;
            // for (int i = a; i <= c && j <= d;) {
            //     points++;
            //     i += x;
            //     j += y;
            // }
        }
        cout << mdc + 1 << endl;
    }
    
    return 0;
}

long long gcd(long long x, long long y) {
    return y ? gcd(y, x % y) : abs(x);
}