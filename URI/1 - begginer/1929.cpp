#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int a;
    vector<int> numbers;
    bool triangle = false;
    
    for (int i = 0; i < 4; i++) {
        cin >> a;
        numbers.push_back(a);
    }
    
    for (int i = 0; i < 4 && !triangle; i++) {
        for (int j = 0; j < 4 && !triangle; j++) {
            for (int k = 0; k < 4 && !triangle; k++) {
                if (i != j && i != k && j != k)
                    if (numbers[j] + numbers[k] > numbers[i] && numbers[i] + numbers[k] > numbers[j] && numbers[i] + numbers[j] > numbers[k])
                        triangle = true;
            }
        }
    }
    
    if (triangle)
        cout << "S\n";
    else
        cout << "N\n";
        
    return 0;
}