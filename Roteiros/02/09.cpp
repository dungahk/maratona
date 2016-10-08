/**
 * Problem: Start Grid
 * Judge: URI Online Judge
 * Link: https://www.urionlinejudge.com.br/judge/en/problems/view/1228
 * 
 * Author: Emerson Jair
 * Date: 6/23/2016
 */
 
#include <bits/stdc++.h>
#include <cstdlib>
 
using namespace std;

#define MAX 100

int bubble(int v[MAX], int n, int map[MAX]);

int main(int argc, char *argv[]) {
    int n, start[MAX], end[MAX], map[MAX];
    
    while (cin >> n) {
        for (int i = 0; i < n; i++) {
            cin >> start[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> end[i];
            map[end[i]] = i;
        }
        
        cout << bubble(start, n, map) << endl;
    }
    return 0;
}

int bubble(int v[MAX], int n, int map[MAX]) {
    int steps = 0, aux;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (map[v[i]] > map[v[j]]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
                steps++;
            }
        }
    }
    return steps;
}