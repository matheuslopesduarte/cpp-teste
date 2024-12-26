// Exercício 3:
// Implemente uma função que troque os valores de duas variáveis inteiras sem usar uma variável auxiliar usando referências.

#include <iostream>

using namespace std;

void trocarValores(int& a, int& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int main() {
    int num1, num2;
    cout << "digite o primeiro numero: ";
    cin >> num1;
    cout << "digite o segundo numero: ";
    cin >> num2;

    cout << "numeros: " << num1 << ", " << num2 << endl;

    trocarValores(num1, num2);

    cout << "numeros 2: " << num1 << ", " << num2 << endl;

    return 0;
}
