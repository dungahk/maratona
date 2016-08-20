#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(void) {
    int n, m, a, b, k, count;
    map<int,vector<int> > list;
    map<int,vector<int> >::iterator it;
    vector<int> position;
    
    while (cin >> n >> m) {
        for (int i = 0; i < n; i++) {
            cin >> a;
            it = list.find(a);
            if (it != list.end()) {
                list.insert(pair<int,vector<int> >(a, position));
            }
            list[a].push_back(i + 1);
        }
        
        for (int i = 0; i < m; i++) {
            cin >> a >> b;
            if (a <= list[b].size())
                cout << list[b][a - 1] << endl;
            else
                cout << 0 << endl;
        }
        
        list.clear();
    }
    
    return 0;
}