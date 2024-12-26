// Exercício 10:
// Implemente uma estrutura de dados de pilha (Stack) usando classes. 
// Inclua métodos para push (push), pop (pop) e verificar se a pilha está vazia.

#include <iostream>
using namespace std;

class Stack {

private:
    int* dados;        
    int capacidade;   
    int topo;          

public:
    Stack(int capacidade) {
        this->capacidade = capacidade;
        dados = new int[capacidade];
        topo = -1;  
    }

    ~Stack() {
        delete[] dados;
    }

    bool Vazia() {
        return topo == -1;
    }

    bool Cheia() {
        return topo == capacidade - 1;
    }

    void push(int valor) {
        if (Cheia()) {
            cout << "a pilha esta cheia" << endl;
        } else {
            dados[++topo] = valor;
            cout << "adicionando: " << valor  << endl;
        }
    }

    void pop() {
        int valor = dados[topo];
        if (Vazia()) {
            cout << "a pilha esta vazia" << endl;
        } else {
            dados[topo--] = valor;
            cout << "removendo: " << valor << endl;
        }
    }

    int max() {
        if (Vazia()) {
            cout << "Pilha vazia!" << endl;
            return -1;
        } else {
            return dados[topo];
        }
    }
};

int main() {
    Stack pilha(5); 

    pilha.push(10);
    pilha.push(20);
    pilha.push(30);

    cout << "item no topo: " << pilha.max() << endl;

    pilha.pop();
    pilha.pop();

    pilha.push(40);

    cout << "item no topo 2: " << pilha.max() << endl;

    return 0;
}
