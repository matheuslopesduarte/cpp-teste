// Exercício 9:
// Escreva um programa que leia um arquivo texto e conte o número de palavras contidas nele usando a biblioteca fstream. 
// O nome do arquivo deve ser fornecido pelo usuário.

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int contarPalavras(string nomeArquivo) {
    ifstream arquivo(nomeArquivo); 
    if (!arquivo) {
        cout << "erro ao abrir o arquivo" << endl;
        return -1;
    }

    string palavra;
    int contador = 0;

    while (arquivo >> palavra) {
        contador++; 
    }

    arquivo.close();  
    return contador;  
}

int main() {
    string nomeArquivo;
    cout << "digite o nome do arquivo: ";
    cin >> nomeArquivo;

    int numeroPalavras = contarPalavras(nomeArquivo);
    if (numeroPalavras != -1) {
        cout << "numero de palavras: " << numeroPalavras << endl;
    }

    return 0;
}
