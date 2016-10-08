#include <bits/stdc++.h>
#include <string>

using namespace std;

bool check_gift (string *text);

int main (void) {
    int n, gift;
    string text;
    char c;
    
    // while (cin >> n, n != 0) {
    cin >> n;
        text = "FACE";
        gift = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 4; j++) {
                cin >> c;
                text.push_back(c);
            }
            if (check_gift(&text))
                gift++;
        }
        cout << gift << endl;
    // }
    return 0;
}

bool check_gift(string *text) {
    int i = (*text).size() - 8, j = (*text).size() - 1;
    while (i < j) {
        if ((*text)[i++] != (*text)[j--])
            return false;
    }
    (*text).erase((*text).size() - 8, 8);
    if ((*text).size() == 0)
        (*text) = "FACE";
    return true;
}