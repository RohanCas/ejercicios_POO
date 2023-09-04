#include <iostream>
#include <cmath>

class Circulo {
private:
    double radio;

public:
    Circulo(double r) {
        radio = r;
    }

    double calcularArea() {
        return M_PI * pow(radio, 2);
    }

    double calcularPerimetro() {
        return 2 * M_PI * radio;
    }

    void cambiarRadio(double nuevoRadio) {
        radio = nuevoRadio;
    }
};

int main() {
    Circulo miCirculo(5.0);

    double area = miCirculo.calcularArea();
    std::cout << "Área del círculo: " << area << std::endl;


    double perimetro = miCirculo.calcularPerimetro();
    std::cout << "Perímetro del círculo: " << perimetro << std::endl;

    return 0;
}

