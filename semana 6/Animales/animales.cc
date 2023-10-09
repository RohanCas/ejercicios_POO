#include <iostream>
#include <string>

class Animal {
public:
    Animal(const std::string& nombre, int edad) : nombre(nombre), edad(edad) {}

    virtual void sonido() const = 0;

    void getInfo() const {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << " anos" << std::endl;
    }

protected:
    std::string nombre;
    int edad;
};

class Perro : public Animal {
public:
    Perro(const std::string& nombre, int edad) : Animal(nombre, edad) {}

    void sonido() const override {
        std::cout << "Guau, guau" << std::endl;
    }
};

class Gato : public Animal {
public:
    Gato(const std::string& nombre, int edad) : Animal(nombre, edad) {}

    void sonido() const override {
        std::cout << "Miau, miau" << std::endl;
    }
};

class Pajaro : public Animal {
public:
    Pajaro(const std::string& nombre, int edad) : Animal(nombre, edad) {}

    void sonido() const override {
        std::cout << "Pio, pio" << std::endl;
    }
};

int main() {
    Perro perro1("Buddy", 3);
    Gato gato1("Whiskers", 2);
    Pajaro pajaro1("Tweetie", 1);

    
    perro1.getInfo();
    perro1.sonido();

    gato1.getInfo();
    gato1.sonido();

    pajaro1.getInfo();
    pajaro1.sonido();

    return 0;
}
