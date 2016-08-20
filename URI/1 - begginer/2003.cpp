#include <iostream>

using namespace std;

int main(void) {
    int h, min, delay, k;
    string tempo;
    
    while (cin >> tempo) {
        h = 0;
        min = 0;
        k = 0;
        
        while (tempo[k] != ':')
            h = h * 10 + (tempo[k++] - '0');
        k++;
        
        while (k < tempo.size())
            min = min * 10 + (tempo[k++] - '0');
            
        if (h < 7)
            delay = 0;
        else
            delay = (h + 1 - 8) * 60 + min;
            
        cout << "Atraso maximo: " << delay << endl;
    }
    
    return 0;
}