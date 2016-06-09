/**
 * Problem: Array 123
 * Judge: URI Online Judge
 * Link: https://www.urionlinejudge.com.br/judge/en/problems/view/1534
 * 
 * Author: Emerson Jair
 * Date: 6/9/2016
 */
 
#include <iostream>
 
using namespace std;
 
int main(int argc, char *argv[]) {
    int n;
    
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i + j == n - 1)
                    cout << 2;
                else if (i == j)
                    cout << 1;
                else
                    cout << 3;
            }
            cout << endl;
        }
    }
    
    return 0;
}
