#include <bits/stdc++.h>

using namespace std;

bool leap(string);
bool hulu(string);
bool bulu(string);

int main(void) {
    int k, teste = 0;
    bool leap_t;
    string n;
    
    while (cin >> n) {
        leap_t = false;
        if (teste++ != 0)
            cout << endl;
        k = 0;
        if (leap(n)) {
            leap_t = true;
            k++;
            cout << "This is leap year.\n";
        }
        if (hulu(n)) {
            k++;
            cout << "This is huluculu festival year.\n";
        }
        if (bulu(n) && leap_t) {
            k++;
            cout << "This is bulukulu festival year.\n";
        }
        if(k == 0)
            cout << "This is an ordinary year.\n";
            
        // cout << endl;
    }
    return 0;
}

bool leap(string n) {
    int k = n[n.size() - 1] - '0' + 10 * (n[n.size() - 2] - '0');
    int t = n[n.size() - 3] - '0' + 10 * (n[n.size() - 4] - '0');
    if (k == 0 && t % 4 == 0)
        return true;
    if (k % 4 != 0)
        return false;
    if (k == 0)
        return false;
    return true;
}

bool hulu(string n) {
    int k = n[n.size() - 1] - '0';
    int sum = 0;
    if (k != 0 && k != 5)
        return false;
    for (int i = 0; i < n.size(); i++) {
        sum += n[i] - '0';
    }
    if (sum % 3 != 0)
        return false;
    return true;
}

bool bulu(string n) {
    int k = n[n.size() - 1] - '0';
    int impar = 0, par = 0;;
    if (k != 0 && k != 5)
        return false;
    for (int i = 0; i < n.size(); i++) {
        if (i % 2 == 0)
            par += n[i] - '0';
        else
            impar += n[i] - '0';
    }
    if (par > impar) {
        if ((par - impar) % 11 != 0)
            return false;
        else
            return true;
    }
    else {
        if ((impar - par) % 11 != 0)
            return false;
        else
            return true;
    }
}