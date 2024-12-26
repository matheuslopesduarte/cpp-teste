// Exercício 7:
// Escreva um programa que leia uma matriz 3x3, calcule a soma de cada linha e exiba os resultados.

#include <iostream>
using namespace std;

int main() {
    
    int array[3][3];

    cout << "digite os itens da matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "item [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        int soma = 0;
        for (int j = 0; j < 3; j++) {
            soma += array[i][j];
        }
        cout << "total da soma da linha " << i + 1 << ": " << soma << endl;
    }

    return 0;
}
