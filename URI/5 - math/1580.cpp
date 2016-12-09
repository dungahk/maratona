#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007

unsigned long long v[10000] = {0};
bool bang2;

unsigned long long fatorial(unsigned long long n);
unsigned long long euclidianoEstendido(unsigned long long a, unsigned long long b);

int main(void) {
    unsigned long long result, fat, baixo;
    int alfabeto[50];
    string frase;
    bool bang;
    
    while (cin >> frase) {
        result = fatorial(frase.size());
        baixo = 1;
        bang = false;
        bang2 = false;
        // cout << "Frase: " << frase << " - Result: " << result << endl;
        for (int i = 0; i < 27; i++) {
            alfabeto[i] = 0;
        }
        for (int i = 0; i < frase.size(); i++) {
            alfabeto[frase[i] - 'A']++;
            // cout << frase[i] - 'A' << endl;
        }
        for (int i = 0; i < 27; i++) {
            if (alfabeto[i] > 1) {
                // cout << "Antes do fatorial de " << alfabeto[i] << "(" << i << ")" << endl;
                fat = fatorial(alfabeto[i]) % MOD;
                // cout << "Fat: " << fat << endl;
                baixo = baixo * fat;
                if (baixo > MOD)
                    bang = true;
                baixo = baixo % MOD;
                // cout << "Baixo: " << baixo << endl;
            }
        }
        
        // cout << endl << endl << "Cima: " << result << endl << "Baixo: " << baixo << endl;
        if (frase.size() > 12 || bang || bang2) {
            baixo = euclidianoEstendido(baixo, MOD);
            result = (result * baixo) % MOD;
        }
        else
            result = (result / baixo) % MOD;
        
        cout << result % MOD << endl;
    }
    
    return 0;
}

unsigned long long fatorial(unsigned long long n) {
    unsigned long long fat;
    if (n == 1 || n == 0)
        return 1;
        
    fat = (n * fatorial(n - 1));
    
    if (fat > MOD)
        bang2 = true;
    
    return fat % MOD;
}

unsigned long long euclidianoEstendido(unsigned long long a, unsigned long long b) {
	unsigned long long x[2] = {1, 0};
	unsigned long long y[2] = {0, 1};

	/* Enquanto o resto da divisão de a por b não for zero, eu continuo o algoritmo. */
	while (a % b != 0) {
		unsigned long long quociente = a / b;

		/* Atualizando os valores de a e b. */
		unsigned long long temp = a;
		a = b;
		b = temp % b;

		/* Atualizando os valores de x e y. */
		unsigned long long X = x[0] - (x[1] * quociente);
		unsigned long long Y = y[0] - (y[1] * quociente);

		x[0] = x[1];
		x[1] = X;
		y[0] = y[1];
		y[1] = Y;
	}
	
	return x[1];
}