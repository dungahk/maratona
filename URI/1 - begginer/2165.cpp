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
    
    if (size <= 140)
        cout << "TWEET" << endl;
    else
        cout << "MUTE" << endl;
        
    return 0;
}