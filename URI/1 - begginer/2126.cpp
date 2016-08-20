#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    long long sub, pos, caso = 1;
    string n1, n2;
    
    while (cin >> n1 >> n2) {
        sub = 0;
        pos = -1;
        
        for (int i = 0; i < n2.size() - n1.size() + 1; i++) {
            if(n1.compare(n2.substr(i, n1.size())) == 0) {
                sub++;
                pos = i + 1;
            }
        }
        
        cout << "Caso #" << caso++ << ":" << endl;
        if (pos == -1)
            cout << "Nao existe subsequencia" << endl;
        else
            cout << "Qtd.Subsequencias: " << sub << endl << "Pos: " << pos << endl;
        cout << endl;
    }
    
    return 0;
}
