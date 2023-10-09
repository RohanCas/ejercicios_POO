class Producto:
    def __init__(self, nombre, precio, categoria):
        self.nombre = nombre
        self.precio = precio
        self.categoria = categoria

    def mostrar_detalle(self):
        print(f"Nombre: {self.nombre}\nPrecio: {self.precio}\nCategoría: {self.categoria}")

class Electronico(Producto):
    def __init__(self, nombre, precio, marca):
        super().__init__(nombre, precio, "Electrónico")
        self.marca = marca

    def mostrar_detalle(self):
        super().mostrar_detalle()
        print(f"Marca: {self.marca}")

class Alimenticio(Producto):
    def __init__(self, nombre, precio, fecha_caducidad):
        super().__init__(nombre, precio, "Alimenticio")
        self.fecha_caducidad = fecha_caducidad

    def mostrar_detalle(self):
        super().mostrar_detalle()
        print(f"Fecha de caducidad: {self.fecha_caducidad}")

class Vestimenta(Producto):
    def __init__(self, nombre, precio, talla):
        super().__init__(nombre, precio, "Vestimenta")
        self.talla = talla

    def mostrar_detalle(self):
        super().mostrar_detalle()
        print(f"Talla: {self.talla}")

laptop = Electronico("Laptop", 1200.0, "XYZ")
laptop.mostrar_detalle()

manzana = Alimenticio("Manzana", 2.5, "2023-10-01")
manzana.mostrar_detalle()

camisa = Vestimenta("Camisa", 30.0, "M")
camisa.mostrar_detalle()
