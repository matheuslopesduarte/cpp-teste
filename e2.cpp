// Exercício 2:
// Implemente uma classe Retangulo que possua os atributos largura e altura.
// Inclua métodos para calcular a área e o perímetro.
// Teste a classe com diferentes valores.

#include <iostream>
using namespace std;

class Retangulo {

private:
    double largura;
    double altura;

public:
    Retangulo(double larg = 1.0, double alt = 1.0) {
        largura = larg;
        altura = alt;
    }

    void setLargura(double larg) {
        if (larg > 0)
        {
            largura = larg;
        }
        else
        {
            cout << "valor invalido pra largura" << endl;
        }
    }

    void setAltura(double alt) {
        if (alt > 0)
        {
            altura = alt;
        }
        else
        {
            cout << "valor invalido pra altura" << endl;
        }
    }

    double getLargura() const {
        return largura;
    }

    double getAltura() const {
        return altura;
    }

    double Area() const {
        return largura * altura;
    }

    double Perimetro() const {
        return 2 * (largura + altura);
    }
};

int main() {
    Retangulo retangulo(5.0, 3.0);

    cout << "largura: " << retangulo.getLargura() << endl;
    cout << "altura: " << retangulo.getAltura() << endl;
    cout << "area: " << retangulo.Area() << endl;
    cout << "perimetro: " << retangulo.Perimetro() << endl << endl;

    retangulo.setLargura(10.0);
    retangulo.setAltura(4.0);

    cout << "largura 2: " << retangulo.getLargura() << endl;
    cout << "altura 2: " << retangulo.getAltura() << endl;
    cout << "area 2: " << retangulo.Area() << endl;
    cout << "perimetro 2: " << retangulo.Perimetro() << endl;

    return 0;
}
