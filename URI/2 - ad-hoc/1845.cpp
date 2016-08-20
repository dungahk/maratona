#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
    char c, d;
    string text;
    
    c = getc(stdin);
    while (c != EOF) {
        if (c == 'S' || c == 's' || c == 'V' || c == 'v' || c == 'J' || c == 'j' || c == 'B' || c == 'b' || c == 'Z' || c == 'z' || c == 'P' || c == 'p' || c == 'X' || c == 'x' || c == 'f' || c == 'F') {
            if (c <= 'Z')
                cout << 'F';
            else
                cout << 'f';
            d = c;
            c = getc(stdin);
            while ((c == 'S' || c == 's' || c == 'V' || c == 'v' || c == 'J' || c == 'j' || c == 'B' || c == 'b' || c == 'Z' || c == 'z' || c == 'P' || c == 'p' || c == 'X' || c == 'x' || c == 'f' || c == 'F') && c != EOF) {
                c = getc(stdin);
            }
            if (c != EOF)
                cout << c;
        }
        else
            cout << c;
        
        c = getc(stdin);
    }
    
    // cout << endl;
    
    return 0;
}