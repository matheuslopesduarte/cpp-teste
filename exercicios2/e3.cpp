// Exercício 3:
// Crie uma calculadora que execute as operações básicas (soma, subtração, multiplicação, divisão) com dois números fornecidos pelo usuário.

#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operacao;

    cout << "digite o primeiro numero: ";
    cin >> num1;
    cout << "digite o segundo numero: ";
    cin >> num2;
    cout << "digite a operacao (+, -, *, /): ";
    cin >> operacao;

    switch (operacao) {
        case '+':
            cout << "resultado: " << num1 + num2 << endl;
            break;
        case '-':
            cout << "resultado: " << num1 - num2 << endl;
            break;
        case '*':
            cout << "resultado: " << num1 * num2 << endl;
            break;
        case '/':
            cout << "resultado: " << num1 / num2 << endl;
            break;
        default:
            cout << "operacao invalida" << endl;
    }

    return 0;
}
