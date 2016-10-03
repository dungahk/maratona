#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long size = 0;
    char c;
    
    c = getc(stdin);
    
    while(c != EOF && c != '\n') {
        size++;
        c = getc(stdin);
    }
    
    if (size <= 80)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
        
    return 0;
}