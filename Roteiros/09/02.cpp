/**
 * Problem: PARPROX - Pontos
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/PARPROX/
 * 
 * Author: Emerson Jair
 * Date: 8/8/2016
 */
 
#include <iostream>
#include <cfloat>
#include <cmath>
#include <iomanip>

using namespace std;

#define MAX 1234

double distance(long long, long long, long long, long long);

int main(int argc, char *argv[]) {
    long long n, x[MAX], y[MAX];
    double d, dist = DBL_MAX;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            d = distance(x[i], y[i], x[j], y[j]);
            if (d < dist)
                dist = d;
        }
    }
    
    if (n <= 1)
        dist = 0.0;
    
    cout << fixed << setprecision(3) << dist << endl;
    
    return 0;
}

double distance(long long x, long long y, long long a, long long b) {
    return sqrt((a - x) * (a - x) + (b - y) * (b - y));
}