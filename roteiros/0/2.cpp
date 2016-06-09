/**
 * Problem: SOMA - Soma
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/SOMA/
 * 
 * Author: Emerson Jair
 * Date: 6/7/2016
 */
 
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int n, value, sum = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> value;
        sum += value;
    }
    
    cout << sum << endl;
    
    return 0;
}
