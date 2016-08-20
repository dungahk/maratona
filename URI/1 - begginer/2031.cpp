#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    long long n;
    string player1, player2;
    
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> player1 >> player2;
        if (player1.compare(player2) == 0) {
            if (player1.compare("pedra") == 0)
                cout << "Sem ganhador" << endl;
            else if (player1.compare("papel") == 0)
                cout << "Ambos venceram" << endl;
            else
                cout << "Aniquilacao mutua" << endl;
        }
        else {
            if (player1.compare("ataque") == 0)
                cout << "Jogador 1 venceu" << endl;
            else if (player2.compare("ataque") == 0)
                cout << "Jogador 2 venceu" << endl;
            else if (player2.compare("papel") == 0)
                cout << "Jogador 1 venceu" << endl;
            else
                cout << "Jogador 2 venceu" << endl;
        }
    }
    return 0;
}
