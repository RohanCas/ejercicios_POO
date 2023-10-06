#include <iostream>
#include <string>

class Producto {
public:
    std::string nombre;
    double precio;
    std::string categoria;

    Producto(std::string nombre, double precio, std::string categoria)
        : nombre(nombre), precio(precio), categoria(categoria) {}

    virtual void mostrar_detalle() {
        std::cout << "Nombre: " << nombre << "\nPrecio: " << precio << "\nCategoria: " << categoria << "\n";
    }
};

class Electronico : public Producto {
public:
    std::string marca;

    Electronico(std::string nombre, double precio, std::string marca)
        : Producto(nombre, precio, "Electronico"), marca(marca) {}

    void mostrar_detalle() override {
        Producto::mostrar_detalle();
        std::cout << "Marca: " << marca << "\n";
    }
};

class Alimenticio : public Producto {
public:
    std::string fechaCaducidad;

    Alimenticio(std::string nombre, double precio, std::string fechaCaducidad)
        : Producto(nombre, precio, "Alimenticio"), fechaCaducidad(fechaCaducidad) {}

    void mostrar_detalle() override {
        Producto::mostrar_detalle();
        std::cout << "Fecha de caducidad: " << fechaCaducidad << "\n";
    }
};

class Vestimenta : public Producto {
public:
    std::string talla;

    Vestimenta(std::string nombre, double precio, std::string talla)
        : Producto(nombre, precio, "Vestimenta"), talla(talla) {}

    void mostrar_detalle() override {
        Producto::mostrar_detalle();
        std::cout << "Talla: " << talla << "\n";
    }
};

int main() {
    Electronico laptop("Laptop", 1200.0, "XYZ");
    laptop.mostrar_detalle();

    Alimenticio fruta("Manzana", 2.5, "2023-10-01");
    fruta.mostrar_detalle();

    Vestimenta camisa("Camisa", 30.0, "M");
    camisa.mostrar_detalle();

    return 0;
}
