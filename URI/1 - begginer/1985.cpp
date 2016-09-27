#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, id, qtd;
    double total = 0.0;
    map<int,double> products;

    products.insert(pair<int,double>(1001, 1.5));
    products.insert(pair<int,double>(1002, 2.5));
    products.insert(pair<int,double>(1003, 3.5));
    products.insert(pair<int,double>(1004, 4.5));
    products.insert(pair<int,double>(1005, 5.5));

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> id >> qtd;
        total += products[id] * qtd;
    }

    cout << fixed << setprecision(2) << total << endl;
    return 0;
}
