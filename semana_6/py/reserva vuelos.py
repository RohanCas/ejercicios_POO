class Reserva:
    def __init__(self, nombre_del_pasajero, numero_de_vuelo, fecha):
        self.nombre_del_pasajero = nombre_del_pasajero
        self.numero_de_vuelo = numero_de_vuelo
        self.fecha = fecha

    def mostrar_detalle(self):
        print(f"Pasajero: {self.nombre_del_pasajero}\nNúmero de vuelo: {self.numero_de_vuelo}\nFecha: {self.fecha}")

class ReservaEconomica(Reserva):
    def __init__(self, nombre_del_pasajero, numero_de_vuelo, fecha, asiento):
        super().__init__(nombre_del_pasajero, numero_de_vuelo, fecha)
        self.asiento = asiento

    def mostrar_detalle(self):
        super().mostrar_detalle()
        print(f"Tipo de reserva: Económica\nAsiento: {self.asiento}")

class ReservaBusiness(Reserva):
    def __init__(self, nombre_del_pasajero, numero_de_vuelo, fecha, clase):
        super().__init__(nombre_del_pasajero, numero_de_vuelo, fecha)
        self.clase = clase

    def mostrar_detalle(self):
        super().mostrar_detalle()
        print(f"Tipo de reserva: Business\nClase: {self.clase}")

class ReservaPrimeraClase(Reserva):
    def __init__(self, nombre_del_pasajero, numero_de_vuelo, fecha, servicio_vip):
        super().__init__(nombre_del_pasajero, numero_de_vuelo, fecha)
        self.servicio_vip = servicio_vip

    def mostrar_detalle(self):
        super().mostrar_detalle()
        print(f"Tipo de reserva: Primera Clase\nServicio VIP: {'Sí' if self.servicio_vip else 'No'}")

reserva_economica = ReservaEconomica("Jose Josh", 123, "2023-10-15", 15)
reserva_economica.mostrar_detalle()

reserva_business = ReservaBusiness("Narea Lokism", 456, "2023-10-15", "Premium")
reserva_business.mo
