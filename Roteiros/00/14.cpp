/**
 * Problem: Reading Books
 * Judge: URI Online Judge
 * Link: https://www.urionlinejudge.com.br/judge/en/problems/view/1542
 * 
 * Author: Emerson Jair
 * Date: 6/9/2016
 */
 
#include <bits/stdc++.h>
 
using namespace std;
 
int main(int argc, char *argv[]) {
    int q, d, p, page;
    
    while (cin >> q >> d >> p) {
        page = (q * d * p) / (p - q);
        if (page == 1)
            cout << page << " pagina\n";
        else
            cout << page << " paginas\n";
    }
    
    return 0;
}
