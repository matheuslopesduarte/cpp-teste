// Exercício 1: 
// Crie um programa que leia um vetor de inteiros de tamanho 10.
// Calcule a soma dos elementos pares e exiba o resultado.

#include <iostream>
using namespace std;

int main() {
    const int TAMANHO = 10;
    int array[TAMANHO];
    int pares = 0;

    cout << "digite 10 numeros inteiros:" << endl;
    for (int i = 0; i < TAMANHO; i++)
    {
        cout << "numero " << i + 1 << ": ";
        cin >> array[i];
    }

    for (int i = 0; i < TAMANHO; i++)
    {
        if (array[i] % 2 == 0)
        {
            pares += array[i];
        }
    }

    cout << "a soma dos numeros pares e: " << pares << endl;

    return 0;
}
