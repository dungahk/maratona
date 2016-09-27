#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, k, max = -1;
    vector<int> calls, result, test;

    calls.push_back(0);
    calls.push_back(0);
    result.push_back(0);
    result.push_back(1);

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> k;
        test.push_back(k);
        if (k > max)
            max = k;
    }

    for (int i = 2; i < max + 1; i++) {
        calls.push_back(calls[i - 1] + calls[i - 2] + 2);
        result.push_back(result[i - 1] + result[i - 2]);
    }

    for (int i = 0; i < n; i++) {
        cout << "fib(" << test[i] << ") = " << calls[test[i]] << " calls = " << result[test[i]] << endl;
    }
    return 0;
}
