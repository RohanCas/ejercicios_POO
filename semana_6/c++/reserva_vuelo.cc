#include <iostream>
#include <string>

class Reserva {
public:
    std::string nombre_del_pasajero;
    int numero_de_vuelo;
    std::string fecha;

    Reserva(std::string nombre, int numero, std::string fecha)
        : nombre_del_pasajero(nombre), numero_de_vuelo(numero), fecha(fecha) {}

    virtual void mostrar_detalle() {
        std::cout << "Pasajero: " << nombre_del_pasajero << "\nNúmero de vuelo: " << numero_de_vuelo
                  << "\nFecha: " << fecha << "\n";
    }
};

class ReservaEconomica : public Reserva {
public:
    int asiento;

    ReservaEconomica(std::string nombre, int numero, std::string fecha, int asiento)
        : Reserva(nombre, numero, fecha), asiento(asiento) {}

    void mostrar_detalle() override {
        Reserva::mostrar_detalle();
        std::cout << "Tipo de reserva: Económica\nAsiento: " << asiento << "\n";
    }
};

class ReservaBusiness : public Reserva {
public:
    std::string clase;

    ReservaBusiness(std::string nombre, int numero, std::string fecha, std::string clase)
        : Reserva(nombre, numero, fecha), clase(clase) {}

    void mostrar_detalle() override {
        Reserva::mostrar_detalle();
        std::cout << "Tipo de reserva: Business\nClase: " << clase << "\n";
    }
};

class ReservaPrimeraClase : public Reserva {
public:
    bool servicioVIP;

    ReservaPrimeraClase(std::string nombre, int numero, std::string fecha, bool servicioVIP)
        : Reserva(nombre, numero, fecha), servicioVIP(servicioVIP) {}

    void mostrar_detalle() override {
        Reserva::mostrar_detalle();
        std::cout << "Tipo de reserva: Primera Clase\nServicio VIP: " << (servicioVIP ? "Sí" : "No") << "\n";
    }
};

int main() {
    ReservaEconomica economy("John Doe", 123, "2023-10-15", 15);
    economy.mostrar_detalle();

    ReservaBusiness business("Alice Smith", 456, "2023-10-15", "Premium");
    business.mostrar_detalle();

    ReservaPrimeraClase firstClass("Bob Johnson", 789, "2023-10-16", true);
    firstClass.mostrar_detalle();

    return 0;
}
