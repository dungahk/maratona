#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int point = -1, exponent = 0;
    string number;
    
    cin >> number;
    
    // sign
    if (isdigit(number[0]))
        cout << '+';
    else
        cout << number[0];
    
    // first digit
    for (int i = 0; i < number.size(); i++) {
        if (number[i] == '.')
            point = i;
    }
    
    if (point == -1) {
        if (isdigit(number[0]))
            point = 1;
        else
            point = 2;
            
        cout << number[point - 1];
        exponent = 0;
        for (int i = point; i < number.size(); i++) {
            exponent++;
        }
    }
    else {
        if (isdigit(number[0])) {
            point = 1;
            // if (number[point] == '.')
            //     point++;
        }
        else {
            point = 2;
            // if (number[point] == '.')
            //     point++;
        }
        if (number[point - 1] != '0')
            cout << number[point - 1];
        
        exponent = 0;
        for (int i = point; i < number.size(); i++) {
            if (number[i] != '.')
                exponent++;
        }
    }
    
    // point
    cout << '.';
    
    // mantissa
    for (int i = point; i < point + 4; i++) {
        if (number[i] == '.')
            point++;
        else {
            if (i == point + 3)
                if (number[point + 4] >= '5')
            cout << number[i];
        }
    }
    
    // E
    cout << "E";
    
    // last sign
    cout << "+";
    
    // exponent
    cout << exponent << endl;
    return 0;
}