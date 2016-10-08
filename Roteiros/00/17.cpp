/**
 * Problem: PAPRIMAS - Palavras primas
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/PAPRIMAS/
 * 
 * Author: Emerson Jair
 * Date: 6/9/2016
 */
 
#include <bits/stdc++.h>
 
using namespace std;

typedef unsigned long long ULL;

bool prime(ULL);
ULL strToNum(string);
 
int main(int argc, char *argv[]) {
    string a;
    
    while (cin >> a) {
        if (prime(strToNum(a)))
            cout << "It is a prime word.\n";
        else
            cout << "It is not a prime word.\n";
    }
    
    return 0;
}

bool prime(ULL n) {
    if (n == 1 || n == 2)
        return true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

ULL strToNum(string a) {
    ULL val = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] >= 'a' && a[i] <= 'z')
            val += a[i] - 'a' + 1;
        else
            val += a[i] - 'A' + 27;
    }
    return val;
}
