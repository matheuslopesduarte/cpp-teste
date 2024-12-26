// Exercício 5:
// Implemente um programa que conte o número de vogais (tanto maiúsculas quanto minúsculas) em uma string fornecida pelo usuário.

#include <iostream>
#include <string>

using namespace std;

int contarVogais(const string& str) {
    int contador = 0;

    for (char ch : str) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            contador++;
        }
    }
    return contador;
}

int main() {
    string str;
    cout << "digite um texto: ";
    cin >> str;

    int numeroVogais = contarVogais(str);
    cout << "numero de vogais: " << numeroVogais << endl;

    return 0;
}
