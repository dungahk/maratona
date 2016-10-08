/**
 * Problem: Coordinates of a Point
 * Judge: URI Online Judge
 * Link: https://www.urionlinejudge.com.br/judge/en/problems/view/1041
 * 
 * Author: Emerson Jair
 * Date: 6/7/2016
 */
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(int argc, char *argv[]) {
    double x, y;
    
    cin >> x >> y;
    
    if (x == 0) {
        if (y == 0)
            cout << "Origem\n";
        else
            cout << "Eixo Y\n";
    }
    else if (y == 0) {
        cout << "Eixo X\n";
    }
    else if (x > 0) {
        if (y > 0)
            cout << "Q1\n";
        else
            cout << "Q4\n";
    }
    else {
        if (y > 0)
            cout << "Q2\n";
        else
            cout << "Q3\n";
    }
    
    return 0;
}
