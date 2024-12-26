// Exercício 4:
// Desenvolva um programa que receba uma string e retorne a mesma string invertida. 
// Não use funções prontas de bibliotecas para inverter!!

#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    string invertido;

    cout << "digite um texto: ";

    cin >> input;

    for (int i = input.length() - 1; i >= 0; i--) {
        invertido += input[i];
    }

    cout << "texto invertido: " << invertido << endl;

    return 0;
}
