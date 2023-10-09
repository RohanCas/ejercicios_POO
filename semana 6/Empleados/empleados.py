class Empleado:
    def __init__(self, nombre, edad, salario):
        self.nombre = nombre
        self.edad = edad
        self.salario = salario

    def describir_rol(self):
        print("Empleado genérico. Realiza tareas generales.")

class Gerente(Empleado):
    def __init__(self, nombre, edad, salario, departamento):
        super().__init__(nombre, edad, salario)
        self.departamento = departamento

    def describir_rol(self):
        print(f"Gerente. Supervisa el departamento: {self.departamento}")

class Ingeniero(Empleado):
    def __init__(self, nombre, edad, salario, especialidad):
        super().__init__(nombre, edad, salario)
        self.especialidad = especialidad

    def describir_rol(self):
        print(f"Ingeniero. Especializado en: {self.especialidad}")

class Asistente(Empleado):
    def __init__(self, nombre, edad, salario, tarea):
        super().__init__(nombre, edad, salario)
        self.tarea = tarea

    def describir_rol(self):
        print(f"Asistente. Realiza tareas administrativas: {self.tarea}")

gerente = Gerente("John Doe", 40, 80000.0, "Ventas")
gerente.describir_rol()

ingeniero = Ingeniero("Alice Smith", 30, 60000.0, "Software")
ingeniero.describir_rol()

asistente = Asistente("Bob Johnson", 25, 35000.0, "Asistencia administrativa")
asistente.describir_rol()
