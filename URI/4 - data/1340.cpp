#include <iostream>

using namespace std;

#define MAX 2000

int maior(int v[MAX], int head, int tail);
void remove(int v[MAX], int b, int head, int tail);

int main() {
    int n, a, b, v[MAX], head, tail;
    int stack, queue, pqueue, dois;
    
    while (cin >> n) {
        // inicializacoes
        head = -1;
        tail = -1;
        stack = 1;
        queue = 1;
        pqueue = 1;
        
        // leitura
        for (int i = 0; i < n; i++) {
            cin >> a >> b;
            
            // Inserindo
            if (a == 1) {
                v[++tail] = b;
                if (head == -1)
                    head = 0;
            }
            // Removendo
            else{
                if (b != v[tail])
                    stack = 0;
                if (b != maior(v, head, tail))
                    pqueue = 0;
                if (b != v[head])
                    queue = 0;
                remove(v, b, head, tail);
                tail--;
            }
        }
        
        // Resultados
        if (stack + queue + pqueue > 1)
            cout << "not sure\n";
        else if (stack + queue + pqueue == 0)
            cout << "impossible\n";
        else {
            if (stack)
                cout << "stack\n";
            if (queue)
                cout << "queue\n";
            if (pqueue)
                cout << "priority queue\n";
        }
    }
}

// Retorna maior elemento
int maior(int v[MAX], int head, int tail){
    int greatest = -1;
    for (int i = head; i <= tail; i++) {
        if (v[i] > greatest)
            greatest = v[i];
    }
    return greatest;
}

// Remove elemento B
void remove(int v[MAX], int b, int head, int tail){
    int u[MAX], j = head;
    for (int i = head; i <= tail; i++) {
        if (v[i] == b)
            v[i] = -1;
    }
    for (int i = head; i <= tail; ++i) {
        if (v[i] != -1)
            u[j++] = v[i];
    }
    for (int i = head; i < tail; i++) {
        v[i] = u[i];
    }
}