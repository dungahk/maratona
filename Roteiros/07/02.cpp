/**
 * Problem: COPA - Copa do mundo
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/COPA/
 *
 * Author: Emerson Jair
 * Date: 7/25/2016
 */

#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]) {
    int numberOfTeams, numberOfGames, ties, teamsPoints;
    string aux;

    while (cin >> numberOfTeams >> numberOfGames, numberOfTeams != 0) {
        ties = 0;
        for (int i = 0; i < numberOfTeams; i++) {
            cin >> aux >> teamsPoints;
            ties += teamsPoints;
        }

        cout << (numberOfGames * 3) - ties << endl;
    }

    return 0;
}
