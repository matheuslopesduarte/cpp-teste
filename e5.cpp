// Exercício 5:
// Implemente o algoritmo de ordenação "Bubble Sort" em C++ para ordenar um vetor de inteiros em ordem crescente.

// Bubble Sort é um algoritmo de ordenação simples que percorre o vetor diversas vezes, comparando elementos adjacentes e trocando-os de posição se estiverem na ordem errada.

#include <iostream>
using namespace std;

void bubbleSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        bool trocou = false;

        for (int j = 0; j < tamanho - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {

                int temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
                trocou = true;
            }
        }

        if (!trocou) {
            break;
        }
    }
}

int main() {

    int array[] = {64, 34, 25, 12, 22, 11, 90};
    int tamanho = sizeof(array) / sizeof(array[0]);

    cout << "array original: ";

    for (int i = 0; i < tamanho; i++) {
        cout << array[i] << " ";
    }

    bubbleSort(array, tamanho);

    cout << endl << "array ordenado: ";

    for (int i = 0; i < tamanho; i++) {
        cout << array[i] << " ";
    }

    return 0;
}