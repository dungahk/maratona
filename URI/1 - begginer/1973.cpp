#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    long long int n, total = 0, visited = 0, k = 0, a, j;
    vector<long long int> farms, stars;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> a;
        farms.push_back(a);
        stars.push_back(0);
        total += farms[i];
    }
    
    while (k >=0 && k < n) {
        j = k;
        if (farms[k] % 2 == 0)
            k--;
        else
            k++;
            
        if (farms[j] > 0) {
            total--;
            farms[j]--;
        }
        
        if (stars[j] == 0)
            visited++;
        stars[j] = 1;
    }
    
    cout << visited << " " << total << endl;
    return 0;
}