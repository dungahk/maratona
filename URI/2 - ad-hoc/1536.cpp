#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    char xis;
    long long n, a, b, t1_p, t2_p, t1_gp, t1_gc, t2_gp, t2_gc, t1_a, t2_a;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        t1_p = t2_p = t1_gp = t1_gc = t2_gp = t2_gc = t1_a = t2_a = 0;
        
        // first game
        cin >> a >> xis >> b;
        t1_gp += a;
        t1_gc += b;
        t2_gp += b;
        t2_gc += a;
        t2_a += b;
        if (a > b)
            t1_p += 3;
        else if (b > a)
            t2_p += 3;
        else {
            t1_p++;
            t2_p++;
        }
        
        // second game
        cin >> b >> xis >> a;
        t1_gp += a;
        t1_gc += b;
        t2_gp += b;
        t2_gc += a;
        t1_a += a;
        if (a > b)
            t1_p += 3;
        else if (b > a)
            t2_p += 3;
        else {
            t1_p++;
            t2_p++;
        }
        
        if (t1_p > t2_p) {
            cout << "Time 1" << endl;
        }
        else if (t1_p < t2_p) {
            cout << "Time 2" << endl;
        }
        else {
            if (t1_gp - t1_gc > t2_gp - t2_gc)
                cout << "Time 1" << endl;
            else if (t1_gp - t1_gc < t2_gp - t2_gc)
                cout << "Time 2" << endl;
            else {
                if (t1_a > t2_a)
                    cout << "Time 1" << endl;
                else if (t1_a < t2_a)
                    cout << "Time 2" << endl;
                else
                    cout << "Penaltis" << endl;
            }
        }
    }
    
    return 0;
}
