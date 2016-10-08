#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int parent;
    string expression;
    bool correct;
    
    while (cin >> expression) {
        parent = 0;
        correct = true;
        for (int i = 0; i < expression.size() && correct; i++) {
            if (expression[i] == '(')
                parent++;
            else if (expression[i] == ')')
                if (parent == 0)
                    correct = false;
                else 
                    parent--;
        }
        
        if (parent == 0 && correct)
            cout << "correct\n";
        else
            cout << "incorrect\n";
    }
    
    return 0;
}