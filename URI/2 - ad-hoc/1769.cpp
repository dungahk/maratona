#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
    int b1, b2, sumb1, sumb2;
    vector<int> c;
    string cpf;
    
    while (cin >> cpf) {
        sumb1 = sumb2 = 0;
        for (int i = 0; cpf[i] != '-'; i++) {
            if (cpf[i] != '.')
                c.push_back(cpf[i] - '0');
        }
        b1 = cpf[cpf.size() - 2] - '0';
        b2 = cpf[cpf.size() - 1] - '0';
        
        for (int i = 0; i < c.size(); i++) {
            sumb1 += (i + 1) * c[i];
            sumb2 += (9 - i) * c[i];
        }
        
        sumb1 = (sumb1 % 11) % 10;
        sumb2 = (sumb2 % 11) % 10;
        
        if (sumb1 == b1 && sumb2 == b2)
            cout << "CPF valido" << endl;
        else
            cout << "CPF invalido" << endl;
            
        c.clear();
    }
    
    return 0;
}
