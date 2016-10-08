/**
 * Problem: BOTAS - Botas perdidas
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/BOTAS/
 * 
 * Author: Emerson Jair
 * Date: 7/25/2016
 */
 
#include <bits/stdc++.h>
#include <vector>

using namespace std;

#define MIN(a, b) ((a) < (b) ? (a) : (b))

int main(int argc, char *argv[]) {
    int n, size, pairs;
    char side;
    vector<int> left, right;
    
    while (cin >> n) {
        left.assign(100, 0);
        right.assign(100, 0);
        for (int i = 0; i < n; i++) {
            cin >> size >> side;
            if (side == 'E')
                left[size]++;
            else
                right[size]++;
        }
        pairs = 0;
        for (int i = 30; i < 61; i++) {
            pairs += MIN(left[i], right[i]);
        }
        
        cout << pairs << endl;
        left.clear();
        right.clear();
    }
    
    return 0;
}
