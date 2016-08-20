#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int n, alcohol = 0, gasoline = 0, diesel = 0;
    
    while (cin >> n, n != 4) {
        if (n == 1)
            alcohol++;
        else if (n == 2)
            gasoline++;
        else if (n == 3)
            diesel++;
    }
    cout << "MUITO OBRIGADO\n";
    cout << "Alcool: " << alcohol << endl;
    cout << "Gasolina: " << gasoline << endl;
    cout << "Diesel: " << diesel << endl;
    
    return 0;
}