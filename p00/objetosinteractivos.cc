#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

class Playlist {
private:
    static const int MAX_CANCIONES = 100; 
    std::string nombre;
    int estado; 
    int indiceActual;
    int cantidadCanciones;
    std::string canciones[MAX_CANCIONES]; 

public:
    Playlist(std::string nombre) {
        this->nombre = nombre;
        estado = 0;
        indiceActual = -1;
        cantidadCanciones = 0;
    }

    void agregarCancion(std::string cancion) {
        if (cantidadCanciones < MAX_CANCIONES) {
            canciones[cantidadCanciones] = cancion;
            cantidadCanciones++;
        }
        else {
            std::cout << "La lista de reproducción esta llena. No se pueden agregar mas canciones." << std::endl;
        }
    }

    void eliminarCancion() {
        if (cantidadCanciones > 0) {
            cantidadCanciones--;
            std::cout << "Se ha eliminado la ultima cancion de la lista." << std::endl;
        }
        else {
            std::cout << "La lista de reproduccion esta vacia." << std::endl;
        }
    }

    void mostrarCanciones() {
        std::cout << "Lista de Reproduccion: " << nombre << std::endl;
        for (int i = 0; i < cantidadCanciones; i++) {
            std::cout << i << ". " << canciones[i] << std::endl;
        }
    }

    void reproducirCancion(int indice) {
        if (indice >= 0 && indice < cantidadCanciones) {
            estado = 1; // Reproduciendo
            indiceActual = indice;
            std::cout << "Reproduciendo: " << canciones[indice] << std::endl;
        }
    }

    void seleccionarCancion(int indice) {
        if (indice >= 0 && indice < cantidadCanciones) {
            indiceActual = indice;
        }
    }

    void pausarCancion() {
        estado = 2; // Pausado
        std::cout << "Pausado: " << canciones[indiceActual] << std::endl;
    }

    void detenerReproduccion() {
        estado = 0; // Detenido
        indiceActual = -1;
        std::cout << "Reproduccion detenida." << std::endl;
    }

    void siguienteCancion() {
        if (indiceActual < cantidadCanciones - 1) {
            indiceActual++;
            reproducirCancion(indiceActual);
        }
        else {
            std::cout << "No hay mas canciones en la lista." << std::endl;
        }
    }

    void cancionAnterior() {
        if (indiceActual > 0) {
            indiceActual--;
            reproducirCancion(indiceActual);
        }
        else {
            std::cout << "Es la primera cancion de la lista." << std::endl;
        }
    }

    void reproducirCancionAleatoria() {
        if (cantidadCanciones > 0) {
            int nuevoIndice;
            do {
                nuevoIndice = rand() % cantidadCanciones;
            } while (nuevoIndice == indiceActual);

            reproducirCancion(nuevoIndice);
        }
        else {
            std::cout << "La lista de reproducción está vacia." << std::endl;
        }
    }

    void verEstado() {
        std::string estadoStr;
        switch (estado) {
            case 0:
                estadoStr = "Detenido";
                break;
            case 1:
                estadoStr = "Reproduciendo";
                break;
            case 2:
                estadoStr = "Pausado";
                break;
            default:
                estadoStr = "Desconocido";
                break;
        }

        std::cout << "Estado: " << estadoStr << std::endl;
    }

    void verCancionActual() {
        if (estado != 0) {
            std::cout << "Cancion actual: " << canciones[indiceActual] << std::endl;
        }
        else {
            std::cout << "No se esta reproduciendo ninguna cancion." << std::endl;
        }
    }
};

int main() {
    srand(time(0)); 

    Playlist miPlaylist("Mi Lista de Reproduccion");

    while (true) {
        std::cout << "\n-- Menu de Reproductor de Sonido --" << std::endl;
        std::cout << "1. Agregar cancion" << std::endl;
        std::cout << "2. Eliminar cancion" << std::endl;
        std::cout << "3. Mostrar canciones" << std::endl;
        std::cout << "4. Reproducir cancion" << std::endl;
        std::cout << "5. Seleccionar cancion" << std::endl;
        std::cout << "6. Pausar cancion" << std::endl;
        std::cout << "7. Detener reproduccion" << std::endl;
        std::cout << "8. Siguiente cancion" << std::endl;
        std::cout << "9. Cancion anterior" << std::endl;
        std::cout << "10. Reproducir cancion aleatoria" << std::endl;
        std::cout << "11. Ver estado" << std::endl;
        std::cout << "12. Ver cancion actual" << std::endl;
        std::cout << "13. Salir" << std::endl;
        std::cout << "Seleccione una opcion: ";

        int opcion;
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                std::string nombreCancion;
                std::cout << "Ingrese el nombre de la cancion a agregar: ";
                std::cin.ignore(); // Limpiamos el buffer de entrada
                std::getline(std::cin, nombreCancion);
                miPlaylist.agregarCancion(nombreCancion);
                break;
            }
            case 2:
                miPlaylist.eliminarCancion();
                break;
            case 3:
                miPlaylist.mostrarCanciones();
                break;
            case 4: {
                int indice;
                std::cout << "Ingrese el índice de la canción a reproducir: ";
                std::cin >> indice;
                miPlaylist.reproducirCancion(indice);
                break;
            }
            case 5: {
                int indice;
                std::cout << "Ingrese el índice de la canción a seleccionar: ";
                std::cin >> indice;
                miPlaylist.seleccionarCancion(indice);
                break;
            }
            case 6:
                miPlaylist.pausarCancion();
                break;
            case 7:
                miPlaylist.detenerReproduccion();
                break;
            case 8:
                miPlaylist.siguienteCancion();
                break;
            case 9:
                miPlaylist.cancionAnterior();
                break;
            case 10:
                miPlaylist.reproducirCancionAleatoria();
                break;
            case 11:
                miPlaylist.verEstado();
                break;
            case 12:
                miPlaylist.verCancionActual();
                break;
            case 13:
                return 0;
            default:
                std::cout << "Opción no válida. Por favor, ingrese una opción válida." << std::endl;
                break;
        }
    }

    return 0;
}
