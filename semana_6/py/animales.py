class Animal:
    def __init__(self, nombre, edad):
        self.nombre = nombre
        self.edad = edad

    def sonido(self):
        raise NotImplementedError("La función sonido debe ser implementada en las clases derivadas")


class Perro(Animal):
    def sonido(self):
        return "Guau, guau"


class Gato(Animal):
    def sonido(self):
        return "Miau, miau"


class Pajaro(Animal):
    def sonido(self):
        return "Pío, pío"


perro1 = Perro("Buddy", 3)
gato1 = Gato("Whiskers", 2)
pajaro1 = Pajaro("Tweetie", 1)

print(f"{perro1.nombre} dice: {perro1.sonido()}")
print(f"{gato1.nombre} dice: {gato1.sonido()}")
print(f"{pajaro1.nombre} dice: {pajaro1.sonido()}")
