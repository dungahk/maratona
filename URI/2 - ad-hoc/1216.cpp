#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char *argv[]) {
    char c;
    double distance, sum = 0.0, average, count = 0.0;
    string name;
    
    // getline(cin, name);
    c = getc(stdin);
    while (c != EOF) {
        distance = 0.0;
        // cout << "Nome: ";
        // cout << c;
        while (c != '\n') {
            c = getc(stdin);
            // cout << c;
        }
        // cout << "Distancia: ";
        c = getc(stdin);
        // cout << c;
        while (c != '\n') {
            distance = distance * 10.0 + c - '0';
            // // cout << distance << endl;
            c = getc(stdin);
            // cout << c;
        }
        // // cout << name << endl;
        // cin >> distance;
        // cout << distance << endl;
        
        sum += distance;
        count += 1.0;
        // getline(cin, name);
        // getline(cin, name);
        // c = getc(stdin);
        c = getc(stdin);
    }
    
    cout << fixed << setprecision(1) << sum / count << endl;
    
    return 0;
}
