#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
    long long n;
    double menor, maior;
    
    cin >> n;
    
    menor = (double) n;
    menor = menor / log(n);
    
    maior = 1.25506 * menor;
    
    cout << fixed << setprecision(1) << menor << " " << maior << endl;
    
    return 0;
}