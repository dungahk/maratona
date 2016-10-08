#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

typedef struct {
    int res;
    int order;
}casa;

bool compare (casa a, casa b);

int main(void) {
    int n, a, b, residents, consumption, k = 0, cpp1, cpp2;
    double consumption_per_person;
    vector<casa> cidade;
    casa aux;
    
    // le
    cin >> n;
    while (n != 0) {
        residents = 0;
        consumption = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            aux.res = a;
            aux.order = b / a;
            cidade.push_back(aux);
            
            residents += a;
            consumption += b;
        }
        
        consumption_per_person = (double) consumption / residents;
        
        //ordena
        sort(cidade.begin(), cidade.end(), compare);
        
        // imprime
        cout << "Cidade# " << ++k << ":\n";
        // lista de orders
        for (int i = 0; i < cidade.size(); i++) {
            if (i != 0)
                cout << " ";
            int j = i + 1;
            int sum_res = cidade[i].res;
            
            while (j < cidade.size() && cidade[j].order == cidade[i].order)
                sum_res += cidade[j++].res;
                
            cout << sum_res << "-" << cidade[i].order;
            i = j - 1;
        }
        cpp1 = consumption_per_person;
        consumption_per_person = (consumption_per_person * 100.0);
        cpp2 = consumption_per_person;
        cpp2 %= 100;
        cout << "\nConsumo medio: " << cpp1 << "." << setfill('0') << setw(2) << cpp2 << " m3.\n";
        
        cin >> n;
        if (n != 0)
            cout << endl;
        cidade.clear();
    }
    
    return 0;
}

bool compare (casa a, casa b) {
    return (a.order < b.order);
}