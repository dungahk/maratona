#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int paint(int matrix[10][10], int n, int m, int *min_click);
bool asiatico(int matrix[10][10], int n, int m);
void print(int matrix[10][10], int n, int m);

int main(void) {
    int n, m, c, min_click;
    int cor[10][10];
    
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            c = getc(stdin);
            if (c == '\n' || c == EOF)
                c = getc(stdin);
            cor[i][j] = c - '0';
        }
    }
    
    // print(cor, n, m);
    min_click = 99999;
    paint(cor, n, m, &min_click);
    cout << min_click << endl;
    
    return 0;
}

void paint(int matrix[10][10], int n, int m, int *min_click) {
    if (asiatico(matrix, n, m)) {
        if (clicks < *min_click)
            *min_click = clicks;
    }
    else {
        
    }
    
    return;
}

bool asiatico(int matrix[10][10], int n, int m) {
    int k = matrix[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] != k)
                return false;
        }
    }
    
    return true;
}

void print(int matrix[10][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
    
    return;
}