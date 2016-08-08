/**
 * Problem: OVERF09 - Overflow
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/OVERF09/
 * 
 * Author: Emerson Jair
 * Date: 6/7/2016
 */
 
#include <iostream>
 
using namespace std;
 
int main(int argc, char *argv[]) {
    int max, a, b;
    char op;
    
    cin >> max;
    cin >> a >> op >> b;
    
    if (op == '+') {
        if (b > max - a)
            cout << "OVERFLOW\n";
        else
            cout << "OK\n";
    }
    else {
        if (a * b > max)
            cout << "OVERFLOW\n";
        else
            cout << "OK\n";
    }
    
    return 0;
}
