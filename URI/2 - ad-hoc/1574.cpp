#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    long long n, k, j, finalPos;
    vector<long long> instructions;
    string inst;
    
    cin >> n;
    
    for (int z = 0; z < n; z++) {
        cin >> k;
        finalPos = 0;
        instructions.assign(k, 0);
        for (int i = 0; i < k; i++) {
            cin >> inst;
            if (inst.compare("LEFT") == 0) {
                finalPos--;
                instructions[i] = -1;
            }
            else if (inst.compare("RIGHT") == 0) {
                finalPos++;
                instructions[i] = 1;
            }
            else {
                cin >> inst >> j;
                finalPos += instructions[j - 1];
                instructions[i] = instructions[j - 1];
            }
        }
        
        cout << finalPos << endl;
        instructions.clear();
    }
    
    return 0;
}
