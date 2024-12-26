// Exercício 6:
// Crie um programa que gere uma senha aleatória de tamanho especificado pelo usuário. 
// A senha deve conter letras maiúsculas, minúsculas, números e caracteres especiais.

// Dica: você pode usar a função srand() da lib cstdlib com a função time(0) da lib ctime como semente para gerar números aleatórios.

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

string gerarSenha(int tamanho) {
    const string caracteres = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_+";
    string senha = "";

    srand(time(0));

    for (int i = 0; i < tamanho; i++) {

        senha += caracteres[rand() % caracteres.length()];
    }

    return senha;
}

int main() {
    int tamanho;

    cout << "digite o tamanho da senha: ";
    cin >> tamanho;

    string senha = gerarSenha(tamanho);
    cout << "sua senha gerada: " << senha << endl;

    return 0;
}
