/**
 * Problem: COPA1 - Copa do mundo
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/COPA1/
 * 
 * Author: Emerson Jair
 * Date: 6/9/2016
 */
 
#include <iostream>
 
using namespace std;
 
int main(int argc, char *argv[]) {
    int a, b, pos = 14, r1[15], r2[15], node;
    
    for (int i = 0; i < 15; i++) {
        cin >> r1[i] >> r2[i];
    }
    node = 0;
    while (pos > 7) {
        pos = 14 - (2 * node + 1);
        node = 2 * node + 1;
        if (r1[pos] > r2[pos]) {
            pos--;
            node++;
        }
    }
    cout << "Pos: " << pos << endl;
    if (r1[pos] < r2[pos])
        cout << (char)('A' + 2 * pos + 1) << endl;
    else
        cout << (char)('A' + 2 * pos) << endl;
    
    return 0;
}
