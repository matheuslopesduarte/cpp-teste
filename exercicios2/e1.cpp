// Exercício 1: 
// Crie um programa que leia uma string e conte quantas vezes um caractere específico aparece nela.

#include <iostream>
#include <string>

using namespace std;

int contarCaractere(const string& str, char c) {
    int contador = 0;
    for (char ch : str) {
        if (ch == c) {
            contador++;
        }
    }
    return contador;
}

int main() {
    string str;
    char ch;
    cout << "digite um texto: ";
    getline(cin, str);
    cout << "digite o caractere: ";
    cin >> ch;

    int resultado = contarCaractere(str, ch);
    cout << "ele aparece " << resultado << " vezes" << endl;

    return 0;
}
