// Exercício 2:
// Implemente uma função que calcule o fatorial de um número inteiro não negativo.

#include <iostream>

using namespace std;

long long fatorial(int numero) {
    if (numero == 0 || numero == 1) {
        return 1;
    }
    long long resultado = 1;
    for (int i = 2; i <= numero; ++i) {
        resultado = resultado * i;
    }
    return resultado;
}

int main() {
    int numero;
    cout << "digite um numero: ";
    cin >> numero;

    cout << "fatorial: " << fatorial(numero) << endl;

    return 0;
}
