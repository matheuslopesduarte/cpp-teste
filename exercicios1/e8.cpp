// Exercício 8:
// Implemente uma classe base chamada Veiculo com atributos como marca e modelo.
// Crie uma classe derivada Carro que inclua um atributo quantidadeDePortas e teste os métodos e atributos herdados.

#include <iostream>
#include <string>
using namespace std;

class Veiculo {

protected:
    string marca;
    string modelo;

public:
    Veiculo(string marca, string modelo) {
        this->marca = marca;
        this->modelo = modelo;
    }

    void print() {
        cout << "marca: " << marca << endl;
        cout << "modelo: " << modelo << endl;
    }
};

class Carro : public Veiculo {

private:
    int quantidadeDePortas;

public:
    Carro(string marca, string modelo, int quantidadeDePortas) : Veiculo(marca, modelo) {
        this->quantidadeDePortas = quantidadeDePortas;
    }

    void printCarro() {
        print(); 
        cout << "portas: " << quantidadeDePortas << endl;
    }
};

int main()
{
    Carro carro("fiat", "toro", 4);

    carro.printCarro();

    return 0;
}
