#include <iostream>
#include <string>

class Animal {
public:
    std::string nombre;
    int edad;

    Animal(std::string nombre, int edad)
        : nombre(nombre), edad(edad) {}

    virtual void sonido() {
        std::cout << "Sonido genérico de un animal.\n";
    }
};

class Perro : public Animal {
public:
    std::string raza;

    Perro(std::string nombre, int edad, std::string raza)
        : Animal(nombre, edad), raza(raza) {}

    void sonido() override {
        std::cout << "Guau guau\n";
    }
};

class Gato : public Animal {
public:
    std::string color;

    Gato(std::string nombre, int edad, std::string color)
        : Animal(nombre, edad), color(color) {}

    void sonido() override {
        std::cout << "Miau miau\n";
    }
};

class Pajaro : public Animal {
public:
    std::string tipo;

    Pajaro(std::string nombre, int edad, std::string tipo)
        : Animal(nombre, edad), tipo(tipo) {}

    void sonido() override {
        std::cout << "Pío pío\n";
    }
};

int main() {
    Perro dog("Buddy", 3, "Labrador");
    dog.sonido();

    Gato cat("Whiskers", 2, "Blanco");
    cat.sonido();

    Pajaro bird("Tweetie", 1, "Canario");
    bird.sonido();

    return 0;
}
