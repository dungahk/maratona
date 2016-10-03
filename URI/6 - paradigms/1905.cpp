#include <bits/stdc++.h>

using namespace std;

bool backtracking (int maze[5][5], int pos_i, int pos_j);
void print_matriz(int m[5][5]);

int main(void) {
    int n, maze[5][5];
    
    cin >> n;
    
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                cin >> maze[i][j];
            }
        }
        
        if (backtracking(maze, 0, 0))
            cout << "COPS\n";
        else
            cout << "ROBBERS\n";
    }
    return 0;
}

bool backtracking (int maze[5][5], int pos_i, int pos_j) {
    maze[pos_i][pos_j] = 1;
    
    // cout << "pos_i: " << pos_i + 1 << " pos_j: " << pos_j + 1 << endl;
    
    // print_matriz(maze);
    
    if (pos_i == 4 && pos_j == 4)
        return true;
    else {
        for (int i = 0; i < 4; i++) {
            if (i == 0 && pos_i - 1 >= 0 && maze[pos_i - 1][pos_j] == 0) {
                if (backtracking(maze, pos_i - 1, pos_j))
                    return true;
                maze[pos_i - 1][pos_j] = 0;
            }
            else if (i == 1 && pos_j + 1 <= 4 && maze[pos_i][pos_j + 1] == 0) {
                if (backtracking(maze, pos_i, pos_j + 1))
                    return true;
                maze[pos_i][pos_j + 1] = 0;
            }
            else if (i == 2 && pos_i + 1 <= 4 && maze[pos_i + 1][pos_j] == 0) {
                if (backtracking(maze, pos_i + 1, pos_j))
                    return true;
                maze[pos_i + 1][pos_j] = 0;
            }
            else if (pos_j - 1 >= 0 && maze[pos_i][pos_j - 1] == 0) {
                if (backtracking(maze, pos_i, pos_j - 1))
                    return true;
                maze[pos_i][pos_j - 1] = 0;
            }
        }
    }
    return false;
}

void print_matriz(int m[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout <<  m[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    return;
}