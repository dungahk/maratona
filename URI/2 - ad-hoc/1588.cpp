#include <bits/stdc++.h>
using namespace std;

typedef struct {
    string name;
    long long points;
    long long wins;
    long long goals;
    long long id;
}team;

bool compare(team a, team b);

int find(vector<team> Teams, string teamName);

int main(int argc, char *argv[]) {
    long long t, n, m, scoreA, scoreB, idA, idB;
    vector<team> Teams;
    team aux;
    string name, teamA, teamB;
    
    cin >> t;
    
    for (int z = 0; z < t; z++) {
        cin >> n >> m;
        for (int i = 0; i < n; i++) {
            cin >> name;
            aux.name.assign(name);
            aux.points = aux.wins = aux.goals = 0;
            aux.id = i;
            Teams.push_back(aux);
        }
        for (int i = 0; i < m; i++) {
            cin >> scoreA >> teamA >> scoreB >> teamB;
            
            idA = find(Teams, teamA);
            idB = find(Teams, teamB);
            
            Teams[idA].goals += scoreA;
            Teams[idB].goals += scoreB;
            
            if (scoreA > scoreB) {
                Teams[idA].points += 3;
                Teams[idA].wins += 1;
            }
            else if (scoreB > scoreA) {
                Teams[idB].points += 3;
                Teams[idB].wins += 1;
            }
            else {
                Teams[idA].points += 1;
                Teams[idB].points += 1;
            }
        }
        
        sort(Teams.begin(), Teams.end(), compare);
        
        for (int i = 0; i < n; i++) {
            cout << Teams[i].name << endl;
        }
        
        Teams.clear();
    }
    
    return 0;
}

bool compare(team a, team b) {
    if (a.points > b.points)
        return true;
    if (a.points < b.points)
        return false;
    if (a.wins > b.wins)
        return true;
    if (a.wins < b.wins)
        return false;
    if (a.goals > b.goals)
        return true;
    if (a.goals < b.goals)
        return false;
    if (a.id < b.id)
        return true;
    if (a.id > b.id)
        return false;
    return true;
}

int find(vector<team> Teams, string teamName) {
    for (int i = 0; i < Teams.size(); i++) {
        if (teamName.compare(Teams[i].name) == 0)
            return i;
    }
    return 0;
}