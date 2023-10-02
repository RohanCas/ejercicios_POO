import math


class circulo:
    def __init__(self,radio):
        self.radio = radio


    def calcularArea(self):
        return math.pi * self.radio ** 2
        
    

    def calcularPerimetro(self):
        return 2 * math.pi * self.radio
    

m_circulo = circulo(5)


area = m_circulo.calcularArea()
print(f"El área del círculo es: {area}")


perimetro = m_circulo.calcularPerimetro()
print(f"El perímetro del círculo es: {perimetro}")
