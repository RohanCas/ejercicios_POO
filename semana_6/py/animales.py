class Animal:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def sonido(self):
        print("Sonido genérico de un animal.")

class Perro(Animal):
    def __init__(self, nombre, edad, raza):
        super().__init__(nombre, edad)
        self.raza = raza

    def sonido(self):
        print("Guau guau")

class Gato(Animal):
    def __init__(self, nombre, edad, color):
        super().__init__(nombre, edad)
        self.color = color

    def sonido(self):
        print("Miau miau")

class Pajaro(Animal):
    def __init__(self, nombre, edad, tipo):
        super().__init__(nombre, edad)
        self.tipo = tipo

    def sonido(self):
        print("Pío pío")


perro = Perro("Buddy", 3, "Labrador")
perro.sonido()

gato = Gato("Whiskers", 2, "Blanco")
gato.sonido()

pajaro = Pajaro("Tweetie", 1, "Canario")
pajaro.sonido()
