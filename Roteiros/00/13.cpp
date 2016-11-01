/**
 * Problem: Dangerous Dive
 * Judge: URI Online Judge
 * Link: https://www.urionlinejudge.com.br/judge/en/problems/view/1471
 * 
 * Author: Emerson Jair
 * Date: 6/9/2016
 */
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(int argc, char *argv[]) {
    int n, r, a;
    bool v[20000];
    
    while (cin >> n >> r) {
        for (int i = 0; i < n; i++) {
            v[i] = false;
        }
        for (int i = 0; i < r; i++) {
            cin >> a;
            v[a - 1] = true;
        }
        if (n == r)
            cout << "*\n";
        else {
            for (int i = 0; i < n; i++) {
                if (!v[i]) {
                    cout << i + 1 << " ";
                }
            }
            cout << endl;
        }
    }
    
    return 0;
}
