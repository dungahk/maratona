/**
 * Problem: FUROS - Cubra os furos
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/FUROS/
 * 
 * Author: Emerson Jair
 * Date: 8/9/2016
 */
 
#include <iostream>
#include <cmath>
#include <cfloat>

using namespace std;

#define MAX 1324

double distance(int x, int y, int a, int b);

int main(int argc, char *argv[]) {
    int n, x[MAX], y[MAX], test = 1;
    double maior, diameter;
    
    while (cin >> n, n != 0) {
        diameter = DBL_MAX;
        for (int i = 0; i < n; i++) {
            cin >> x[i] >> y[i];
        }
        for (int i = 0; i < n; i++) {
            maior = 0.0;
            for (int j = 0; j < n; j++) {
                if (i != j) {
                    if (distance(x[i], y[i], x[j], y[j]) > maior) {
                        maior = distance(x[i], y[i], x[j], y[j]);
                    }
                }
            }
            if (maior < diameter) {
                diameter = maior;
            }
        }
        
        diameter = 2.0 * diameter + 5.0;
        
        cout << "Teste " << test++ << endl;
        cout << (int) ceil(diameter) << endl << endl;
    }
    
    return 0;
}

double distance(int x, int y, int a, int b) {
    return sqrt((a - x) * (a - x) + (b - y) * (b - y));
}