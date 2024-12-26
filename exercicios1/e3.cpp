// Exercício 3: 
// Escreva uma função que verifique se um número é primo. 
// Use essa função para encontrar todos os números primos entre 1 e 100.

#include <iostream>
using namespace std;

bool Primo(int numero) {
    if (numero <= 1) {
        return false;
    }
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false; 
        }
    }
    return true;
}

int main() {
    cout << "primos entre 1 e 100:" << endl;

    for (int i = 1; i <= 100; i++) {
        if (Primo(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
