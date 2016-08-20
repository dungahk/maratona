#include <stdio.h>

double pascal[5001][5001];

int main(void) {
    int n, i, j;
    
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            if (i == 0 && j == 0)
                pascal[i][j] = 1.0;
            else if (j == 0 || j == i)
                pascal[i][j] = pascal[i - 1][0] / 2.0;
            else
                pascal[i][j] = pascal[i - 1][j - 1]/2.0 + pascal[i - 1][j]/2.0;
        }
    }
    
    printf("%.2lf\n", 100.0 * (pascal[n - 1][n / 2]));
    return 0;
}