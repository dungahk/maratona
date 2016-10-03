#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, m, salary, value;
    map<string,int> dictionary;
    map<string,int>::iterator it;
    string description, job;
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        cin >> job >> value;
        dictionary.insert(pair<string,int>(job, value));
    }
    
    for (int i = 0; i < m; i++) {
        salary = 0;
        cin >> description;
        while (description[0] != '.') {
            it = dictionary.find(description);
            if (it != dictionary.end())
                salary += it->second;
            cin >> description;
        }
        cout << salary << endl;
    }
    
    return 0;
}