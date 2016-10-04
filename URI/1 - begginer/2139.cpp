#include <bits/stdc++.h>

using namespace std;

long long natal(long long month, long long day);

int main(int argc, char *argv[]) {
    long long day, month;

    while (cin >> month >> day) {
        if (month == 12 && day == 25)
            cout << "E natal!" << endl;
        else if (month == 12 && day == 24)
            cout << "E vespera de natal!" << endl;
        else if (month == 12 && day > 25)
            cout << "Ja passou!" << endl;
        else
            cout << "Faltam " << natal(month, day) << " dias para o natal!" << endl;
    }
    return 0;
}

long long natal(long long month, long long day) {
    long long christmas[12], days[12];
    days[11] = 31;
    days[10] = 30;
    days[9] = 31;
    days[8] = 30;
    days[7] = 31;
    days[6] = 31;
    days[5] = 30;
    days[4] = 31;
    days[3] = 30;
    days[2] = 31;
    days[1] = 29;
    days[0] = 31;

    christmas[11] = 25;
    for (int i = 10; i >= 0; i--) {
        christmas[i] = christmas[i + 1] + days[i];
    }

    return christmas[month] + days[month - 1] - day;
}
