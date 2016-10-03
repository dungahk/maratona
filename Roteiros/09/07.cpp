/**
 * Problem: 11227 - The silver bullet.
 * Judge: UVa Online Judge
 * Link: https://uva.onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2168
 * 
 * Author: Emerson Jair
 * Date: 8/10/2016
 */
 
#include <bits/stdc++.h>
using namespace std;

typedef struct {
    double x;
    double y;
}Point;

typedef struct {
    double i;
    double j;
}Vetor;

bool contains(vector<Point> v, Point p);
bool equals(Point a, Point b);
bool equalsVetor(Vetor u, Vetor v);
void calcVector(Point p, Point q, Vetor *v);

int main(int argc, char *argv[]) {
    int t, n, gnus = 0, maior;
    double a, b;
    Point aux;
    vector<Point> points;
    Vetor u, v;
    
    cin >> t;
    
    for (int z = 0; z < t; z++) {
        gnus = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            aux.x = a;
            aux.y = b;
            if(!contains(points, aux))
                points.push_back(aux);
        }
        
        for (int i = 0; i < points.size(); i++) {
            for (int j = i + 1; j < points.size(); j++) {
                calcVector(points[i], points[j], &u);
                maior = 0;
                for (int k = j + 1; k < points.size(); k++) {
                    calcVector(points[i], points[k], &v);
                    if (equalsVetor(u, v)) {
                        maior++;
                    }
                }
                if (maior > gnus)
                    gnus = maior;
            }
        }
        
        gnus += 2;
        
        if (points.size() == 1)
            cout << "Data set #" << z + 1 << " contains a single gnu.\n";
        else {
            cout << "Data set #" << z + 1 << " contains " << points.size() << " gnus, ";
            cout << "out of which a maximum of " << gnus << " are aligned.\n";
        }
        
        points.clear();
    }
    
    return 0;
}

bool contains(vector<Point> v, Point p) {
    for (auto i : v) {
        if (equals(i, p))
            return true;
    }
    return false;
}

bool equals(Point p, Point q) {
    return (p.x == q.x && p.y == q.y);
}

bool equalsVetor(Vetor u, Vetor v) {
    return (u.i == v.i && u.j == v.j);
}

void calcVector(Point p, Point q, Vetor *v) {
    double norma;
    
    v->i = q.x - p.x;
    v->j = q.y - p.y;
    norma = sqrt(v->i * v->i + v->j * v->j);
    v->i /= norma;
    v->j /= norma;
}