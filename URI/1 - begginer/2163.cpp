#include <iostream>

using namespace std;

#define MAX 1123

int main(int argc, char *argv[]) {
    long long n, m, a = 0, b = 0;
    int terrain[MAX][MAX];
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> terrain[i][j];
        }
    }
    
    for (int i = 1; i < n - 1 && a == 0; i++) {
        for (int j = 1; j < m - 1 && a == 0; j++) {
            if (terrain[i][j] == 42 && terrain[i - 1][j - 1] == 7 && terrain[i - 1][j] == 7 && terrain[i - 1][j + 1] == 7 && terrain[i][j - 1] == 7 && terrain[i][j + 1] == 7 && terrain[i + 1][j - 1] == 7 && terrain[i + 1][j] == 7 && terrain[i + 1][j + 1] == 7) {
                a = i + 1;
                b = j + 1;
            }
        }
    }
    
    cout << a << " " << b << endl;
    
    return 0;
}