#include <iostream>
#include <string>

class Empleado {
public:
    std::string nombre;
    int edad;
    double salario;

    Empleado(std::string nombre, int edad, double salario)
        : nombre(nombre), edad(edad), salario(salario) {}

    virtual void describir_rol() const {
        std::cout << "Empleado genérico. Realiza tareas generales.\n";
    }
};

class Gerente : public Empleado {
public:
    std::string departamento;

    Gerente(std::string nombre, int edad, double salario, std::string departamento)
        : Empleado(nombre, edad, salario), departamento(departamento) {}

    void describir_rol() const override {
        std::cout << "Gerente. Supervisa el departamento: " << departamento << "\n";
    }
};

class Ingeniero : public Empleado {
public:
    std::string especialidad;

    Ingeniero(std::string nombre, int edad, double salario, std::string especialidad)
        : Empleado(nombre, edad, salario), especialidad(especialidad) {}

    void describir_rol() const override {
        std::cout << "Ingeniero. Especializado en: " << especialidad << "\n";
    }
};

class Asistente : public Empleado {
public:
    std::string tarea;

    Asistente(std::string nombre, int edad, double salario, std::string tarea)
        : Empleado(nombre, edad, salario), tarea(tarea) {}

    void describir_rol() const override {
        std::cout << "Asistente. Realiza tareas administrativas: " << tarea << "\n";
    }
};

int main() {
    Gerente manager("juan juan", 70, 80000.0, "Ventas");
    manager.describir_rol();

    Ingeniero engineer("jose jose", 50, 60000.0, "Software");
    engineer.describir_rol();

    Asistente assistant("Rob Robinson", 45, 35000.0, "Asistencia administrativa");
    assistant.describir_rol();

    return 0;
}

