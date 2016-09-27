#include <bits/stdc++.h>

using namespace std;

int find(vector<int> times, int t);
bool contains(vector<int> v, int k);

int main(void) {
    int n, t, magic_number, k;
    vector<int> times;
    bool impossible;
    
    cin >> n >> t;
    
    while (n != 0 || t != 0) {
        impossible = false;
        for (int i = 0; i < n; i++) {
            cin >> k;
            if (t % k != 0)
                impossible = true;
            if (!impossible)
                times.push_back(k);
        }
        
        if (!impossible)
            magic_number = find(times, t);
        
        if (magic_number == 0)
            impossible = true;
        
        if (impossible)
            cout << "impossivel\n";
        else
            cout << magic_number << endl;
        cin >> n >> t;
    }
    
    return 0;
}

int find(vector<int> times, int t) {
    int i;
    for (i = 2; i <= t; i++) {
        if (t % i == 0)
            if (!contains(times, i))
                return i;
    }
    return 0;
}

bool contains(vector<int> v, int k) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] == k)
            return true;
    }
    return false;
}