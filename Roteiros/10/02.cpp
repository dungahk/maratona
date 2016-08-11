/**
 * Problem: COMCAMEL - Comércio de Camelos
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/COMCAMEL/
 * 
 * Author: Emerson Jair
 * Date: 8/11/2016
 */
 
#include <iostream>
#include <stack>

using namespace std;

int main(int argc, char *argv[]) {
    int n, min = 0, max = 0, number;
    char last;
    string expression;
    stack<int> sumMax, multMax, sumMin, multMin;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        last = '+';
        cin >> expression;
        number = 0;
        for (int j = 0; j < expression.size(); j++) {
            if (expression[j] == '+') {
                // MAX
                sumMax.push(number);
                
                // MIN
                while (!multMin.empty()) {
                    number *= multMin.top();
                    multMin.pop();
                }
                sumMin.push(number);
                
                // config
                number = 0;
                last = '+';
            }
            else if (expression[j] == '*') {
                // MIN
                multMin.push(number);
                
                // MAX
                while (!sumMax.empty()) {
                    number += sumMax.top();
                    sumMax.pop();
                }
                multMax.push(number);
                
                // config
                number = 0;
                last = '*';
            }
            else {
                number = number * 10 + expression[j] - '0';
            }
        }
        max = min = number;
        cout << max << " " << min << endl;
        // MAX
        if (last == '+') {
            while (!sumMax.empty()) {
                max += sumMax.top();
                sumMax.pop();
            }
        }
        cout << max << " " << min << endl;
        
        while (!multMax.empty()) {
            max *= multMax.top();
            multMax.pop();
        }
        
        cout << max << " " << min << endl;
        // MIN
        if (last == '*') {
            while (!multMin.empty()) {
                min *= multMin.top();
                multMin.pop();
            }
        }
        cout << max << " " << min << endl;
        
        while (!sumMin.empty()) {
            min += sumMin.top();
            sumMin.pop();
        }
        cout << max << " " << min << endl;
        
        
        
        cout << "The maximum and minimum are " << max << " and " << min << ".\n";
        
        // MAX
        while (!sumMax.empty()) {
            sumMax.pop();
        }
        while (!multMax.empty()) {
            multMax.pop();
        }
        
        // MIN
        while (!sumMin.empty()) {
            sumMin.pop();
        }
        while (!multMin.empty()) {
            multMin.pop();
        }
    }
    
    return 0;
}
