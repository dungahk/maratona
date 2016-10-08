#include <bits/stdc++.h>
#include <cstdio>
#include <cstring>

using namespace std;

int P[100100];
int L[100100];
int rg;

int findset(int v) {
    if (P[v] == v)
        return v;
    return P[v] = findset(P[v]);
}

void unionset(int x, int y) {
    int a = findset(x), b = findset(y);
    if (a==b)
        return;
    
    P[b] = a;
    L[a] += L[b];
    if (rg==b)
        rg = a;
    return;
}

int main() {
    int n, k;
    while(scanf("%d %d", &n, &k), n|k) {
        int rw = 0;
        rg = 1;
        for(int i=1; i<=n; i++) {
            scanf("%d", L+i);
            P[i] = i;
        }
        
        for(int i=0; i<k; i++) {
            int q, a, b;
            scanf("%d %d %d", &q, &a, &b);
            
            if (q==1)
                unionset(a, b);
            else {
                int fa = findset(a), fb = findset(b);
                if (L[fa] > L[fb]) {
                    if (rg == fa)
                        rw++;
                }
                if (L[fa] < L[fb]) {
                    if (rg == fb)
                        rw++;
                }
            }
        }
        cout << rw << endl;
    }
    
    return 0;
}