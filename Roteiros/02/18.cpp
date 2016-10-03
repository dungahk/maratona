/**
 * Problem: FUTEBOL - Futebol
 * Judge: SPOJ-BR
 * Link: http://br.spoj.com/problems/FUTEBOL/
 * 
 * Author: Emerson Jair
 * Date: 6/23/2016
 */
 
#include <bits/stdc++.h>
using namespace std;

#define MAX_TEAM 50

typedef struct {
    string name;
    int points;
    int games;
    int GF;
    int GA;
    int GD;
}team;

bool comp(team, team);

int main(int argc, char *argv[]) {
    int teamsNumber, gamesNumber, scoreHome, scoreAway, indexHome, indexAway;
    string teamsName[MAX_TEAM], teamHome, teamAway, separator;
    vector<team> Teams;
    team teamAux;
    
    while (cin >> teamsNumber >> gamesNumber, teamsNumber != 0) {
        for (int i = 0; i < teamsNumber; i++) {
            cin >> teamAux.name;
            teamAux.name;
            teamAux.points = 0;
            teamAux.games = 0;
            teamAux.GF = 0;
            teamAux.GA = 0;
            teamAux.GD = 0;
            Teams.push_back(teamAux);
        }
        
        for (int i = 0; i < gamesNumber; i++) {
            cin >> teamHome >> scoreHome >> separator >> scoreAway >> teamAway;
            for (int j = 0; j < teamsNumber; j++) {
                if (teamHome.compare(Teams[j].name) == 0) {
                    indexHome = j;
                }
                if (teamAway.compare(Teams[j].name) == 0) {
                    indexAway = j;
                }
            }
            Teams[indexHome].games++;
            Teams[indexHome].GF += scoreHome;
            Teams[indexHome].GA += scoreAway;
            Teams[indexHome].GD += scoreHome - scoreAway;
            
            Teams[indexAway].games++;
            Teams[indexAway].GF += scoreAway;
            Teams[indexAway].GA += scoreHome;
            Teams[indexAway].GD += scoreAway - scoreHome;
            
            if (scoreHome > scoreAway) {
                Teams[indexHome].points += 3;
            }
            else if (scoreHome == scoreAway) {
                Teams[indexHome].points += 1;
                Teams[indexAway].points += 1;
            }
            else {
                Teams[indexAway].points += 3;
            }
        }
        
        sort(Teams.begin(), Teams.end(), comp);
        
        for (int i = 0; i < teamsNumber; i++) {
            if (i > 0 && Teams[i].points == Teams[i - 1].points && Teams[i].GD == Teams[i - 1].GD && Teams[i].GF == Teams[i - 1].GF)
                cout << setw(19) << Teams[i].name;
            else
                cout << setw(2) << i + 1 << ". " << setw(15) << Teams[i].name;
            cout << " " << setw(3) << Teams[i].points 
            << " " << setw(3) << Teams[i].games 
            << " " << setw(3) << Teams[i].GF 
            << " " << setw(3) << Teams[i].GA
            << " " << setw(3) << Teams[i].GD;
            if (Teams[i].games != 0)
                cout << " " << setw(6) << fixed << setprecision(2) << (double) (Teams[i].points / (3.0 * Teams[i].games)) * 100.0 << endl;
            else
                cout << " " << setw(6) << "N/A" << endl;
            // printf("%d. %15s %d %d %d %d %d %.2lf", i + 1, Teams[i].name, Teams[i].points, Teams[i].games, Teams[i].GF, Teams[i].GA, Teams[i].GD, Teams[i].percent);
            // cout << i + 1 << ". " << Teams[i].name << " " << Teams[i].points << endl;
        }
        cout << endl;
        Teams.clear();
    }
    return 0;
}

bool comp(team a, team b) {
    string loA, loB;
    if (a.points > b.points)
        return true;
    if (b.points > a.points)
        return false;
    if (a.GD > b.GD)
        return true;
    if (b.GD > a.GD)
        return false;
    if (a.GF > b.GF)
        return true;
    if (b.GF > a.GF)
        return false;
    for (int i = 0; i < a.name.size(); i++) {
        loA.push_back(tolower(a.name[i]));
    }
    for (int i = 0; i < b.name.size(); i++) {
        loB.push_back(tolower(b.name[i]));
    }
    if (loA.compare(loB) < 0)
        return true;
    return false;
}
