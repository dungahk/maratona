/**
 * Problem: Highest and Position
 * Judge: URI Online Judge
 * Link: https://www.urionlinejudge.com.br/judge/en/problems/view/1080
 * 
 * Author: Emerson Jair
 * Date: 6/7/2016
 */
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(int argc, char *argv[]) {
    int maior = -1, n, pos;
    
    for (int i = 0; i < 100; i++) {
        cin >> n;
        if (n > maior) {
            maior = n;
            pos = i + 1;
        }
    }
    
    cout << maior << endl;
    cout << pos << endl;
    
    return 0;
}
