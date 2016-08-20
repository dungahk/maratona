#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int main(void) {
    int n, t, a, b, instance = 0;
    vector<int> ride_time, score, m;
    
    while (cin >> n >> t, n != 0) {
        m.assign(t + 1, 0);
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            ride_time.push_back(a);
            score.push_back(b);
        }
        
        for (int i = 1; i <= t; i++) {
            for (int j = 0; j < n; j++) {
                if (i - ride_time[j] >= 0 && score[j] + m[i - ride_time[j]] > m[i])
                    m[i] = score[j] + m[i - ride_time[j]];
            }
        }
        
        cout << "Instancia " << ++instance << endl;
        cout << m[t] << endl << endl;
        
        m.clear();
        ride_time.clear();
        score.clear();
    }
    return 0;
}
