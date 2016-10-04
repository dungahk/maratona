#include <bits/stdc++.h>

using namespace std;

int m;

bool compare (int a, int b);

int main(void) {
    int n, a;
    vector<int> numbers;

    cin >> n >> m;
    while (n != 0 || m != 0) {
        for (int i = 0; i < n; i++) {
            cin >> a;
            // cout << "Modulo: " << a % m << endl;
            numbers.push_back(a);
        }

        // sorting
        sort(numbers.begin(), numbers.end(), compare);

        // output
        cout << n << " " << m << endl;
        for (int i = 0; i < n; i++) {
            cout << numbers[i] << endl;
        }

        numbers.clear();
        cin >> n >> m;
    }
    cout << n << " " << m << endl;
    return 0;
}

bool compare (int a, int b) {
    if (a % m < b % m)
        return true;
    else if (a % m > b % m)
        return false;
    else {
        // odd - even
        if ((a % 2 == 0 && b % 2 != 0) || (a % 2 != 0 && b % 2 == 0)) {
            if (a % 2 != 0)
                return true;
            else
                return false;
        }
        // odd
        else if (a % 2 != 0) {
            if (a > b)
                return true;
            else
                return false;
        }
        // even
        else {
            if (a < b)
                return true;
            else
                return false;
        }
    }
}
