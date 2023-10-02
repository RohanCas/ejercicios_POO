import math
import os

class Rectangulo:
    def __init__(self, longitud, ancho):
        self.longitud = longitud
        self.ancho = ancho

    def calcularArea(self):
        return self.longitud * self.ancho

    def calcularPerimetro(self):
        return 2 * (self.longitud + self.ancho)

    def cambiarLongitud(self, nueva_longitud):
        self.longitud = nueva_longitud

    def cambiarAncho(self, nuevo_ancho):
        self.ancho = nuevo_ancho
    


m_rectangulo = Rectangulo(5, 10)

area = m_rectangulo.calcularArea()
print("Área del rectángulo:", area)


perimetro = m_rectangulo.calcularPerimetro()
print("Perímetro del rectángulo:", perimetro)
