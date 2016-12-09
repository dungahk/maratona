#include <bits/stdc++.h>

using namespace std;

// #define MAX(a, b) ((a) > (b)) ? (a) : (b)

// void zera_matriz(int M[200][200]);
// void print_matriz(int M[200][200], int);

int main(void) {
    int n, k, a, number, newL, L, hi, lo, mid;//, M[200][200];
    vector<int> sequence, P, M;
    // stack<int> pilha;
    
    while (cin >> n >> k, n != 0 || k != 0) {
        // zera_matriz(M);
        number = 0;
        for (int i = 0; i < n; i++) {
            cin >> a;
            sequence.push_back(a);
        }
        
        P.assign(n, 0);
        M.assign(n + 1, 0);
        
        L = 0;
        
        for (int i = 0; i < n; i++) {
            lo = 1;
            hi = L;
            while (lo <= hi) {
                mid = ceil((hi + lo) / 2);
                if (sequence[M[mid]] < sequence[i])
                    lo = mid + 1;
                else
                    hi = mid - 1;
            }
            
            newL = lo;
            
            P[i] = M[newL - 1];
            M[newL] = i;
            
            if (newL == k)
                number++;
            
            if (newL > L)
                L = newL;
        }
        
        // for (int i = 0; i < n; i++) {
        //     pilha.push(i);
        //     for (int j = i + 1; j < n; j++) {
        //         if (sequence[j] > sequence[pilha.top()]) {
        //             cout << "(" << i << ")SIZE: " << pilha.size();
        //             M[i][j] = MAX(M[i][j], pilha.size());
        //             cout << " - M i j: " << M[i][j];
        //             pilha.push(j);
        //             cout << " - " << sequence[j] << " " << sequence[pilha.top()] << endl;
        //         }
        //         if (j == n - 1 && pilha.size() > 1) {
        //             j = pilha.top();
        //             pilha.pop();
        //             cout << "VOLTOU!\n";
        //         }
        //     }
        //     while (!pilha.empty())
        //         pilha.pop();
        // }
        
        sequence.clear();
        // print_matriz(M, n);
        // while (!pilha.empty())
        //         pilha.pop();
        
        cout << number << " L: " << L << endl;
        
    }
    return 0;
}

// void zera_matriz(int M[200][200]) {
//     for (int i = 0; i < 200; i++) {
//         for (int j = 0; j < 200; j++) {
//             M[i][j] = 0;
//         }
//     }
    
//     return;
// }

// void print_matriz(int M[200][200], int n) {
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << M[i][j] << " ";
//         }
//         cout << endl;
//     }
    
//     return;
// }