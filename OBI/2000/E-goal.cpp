#include <iostream>
#include <climits>
#include <vector>

using namespace std;

typedef int Number;

int main(int argc, char *argv[]) {
    Number n, a, b, test = 1, maior, period;
    vector<Number> saldo, sum;
    
    while(cin >> n, n != 0) {
        maior = INT_MIN;
        period = -1;
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            saldo.push_back(a - b);
        }
        
        // terceira tentativa(DP com vetor)
        
        for (int i = 0; i < n; i++) {
            sum.assign(n, 0);
            sum[i] = saldo[i];
            if (sum[i] > maior) {
                maior = sum[i];
                a = i + 1;
                b = i + 1;
                period = b - a;
            }
            else if (sum[i] == maior && (i - i) >= period) {
                a = i + 1;
                b = i + 1;
                period = b - a;
            }
            for (int j = i + 1; j < n; j++) {
                sum[j] = sum[j - 1] + saldo[j];
                if (sum[j] > maior) {
                    maior = sum[j];
                    a = i + 1;
                    b = j + 1;
                    period = b - a;
                }
                else if (sum[j] == maior && (j - i) >= period) {
                    a = i + 1;
                    b = j + 1;
                    period = b - a;
                }
            }
        }
        
        // segunda tentativa(DP)
        
        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         cout << "xD";
        //         M[i][j] = M[i][j - 1] + saldo[j];
        //         if (M[i][j] > maior) {
        //             maior = M[i][j];
        //             a = i + 1;
        //             b = j + 1;
        //             period = b - a;
        //         }
        //         else if (M[i][j] == maior && (j - i) >= period) {
        //             a = i + 1;
        //             b = j + 1;
        //             period = b - a;
        //         }
        //     }
        //     cout << "xD";
        // }
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < n; j++) {
        //         cout << M[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;
        
        // primeira tentativa(brute force)
        
        // for (int i = 0; i < n; i++) {
        //     for (int j = i; j < n; j++) {
        //         sum = 0;
        //         for (int k = i; k <= j; k++) {
        //             sum += saldo[k];
        //         }
        //         // cout << i + 1 << " - " << j + 1 << " = " << sum << endl;
        //         if (sum > maior) {
        //             maior = sum;
        //             a = i + 1;
        //             b = j + 1;
        //             period = b - a;
        //         }
        //         else if (sum == maior && (j - i) >= period) {
        //             a = i + 1;
        //             b = j + 1;
        //             period = b - a;
        //         }
        //     }
        // }
        
        cout << "Teste " << test++ << endl;
        if (maior > 0)
            cout << a << " " << b << endl << endl;
        else
            cout << "nenhum\n\n";
        
        saldo.clear();
    }
    return 0;
}