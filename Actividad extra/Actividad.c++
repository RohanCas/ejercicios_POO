#include <iostream>
#include <vector>
#include <chrono>

#ifdef _WIN32
#define CLEAR_SCREEN "cls"
#else
#define CLEAR_SCREEN "clear"
#endif

class OrdenamientoBusqueda {
public:
    OrdenamientoBusqueda() {}

    void ingresarDatos() {
        std::cout << "Ingrese la cantidad de numeros: ";
        std::cin >> n;

        std::cout << "Ingrese la lista de numeros:\n";
        lista.resize(n);

        for (int i = 0; i < n; ++i) {
            std::cin >> lista[i];
        }

        std::cout << "Ingrese el numero que desea buscar: ";
        std::cin >> numeroBuscado;
    }

    void ordenarLista() {
        system(CLEAR_SCREEN);
        auto start = std::chrono::high_resolution_clock::now();

        quickSort(0, lista.size() - 1);

        auto stop = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

        std::cout << "Lista ordenada en " << duration.count() << " microsegundos.\n";

        
        mostrarLista();
    }

    void buscarNumero() {
        auto start = std::chrono::high_resolution_clock::now();

        int indice = busquedaBinaria(numeroBuscado);

        auto stop = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

        if (indice != -1) {
            std::cout << "Numero " << numeroBuscado << " encontrado en la posicion " << indice << ".\n";
        } else {
            std::cout << "Numero " << numeroBuscado << " no encontrado.\n";
        }

        std::cout << "Busqueda realizada en " << duration.count() << " microsegundos.\n";
    }

private:
    void quickSort(int low, int high) {
        if (low < high) {
            int pi = particion(low, high);

            quickSort(low, pi - 1);
            quickSort(pi + 1, high);
        }
    }

    int particion(int low, int high) {
        int pivot = lista[high];
        int i = (low - 1);

        for (int j = low; j <= high - 1; j++) {
            if (lista[j] < pivot) {
                i++;
                std::swap(lista[i], lista[j]);
            }
        }

        std::swap(lista[i + 1], lista[high]);
        return (i + 1);
    }

    int busquedaBinaria(int numero) {
        int left = 0, right = lista.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (lista[mid] == numero) {
                return mid;
            }

            if (lista[mid] < numero) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1; 
    }

   

    void mostrarLista() {
        std::cout << "Lista ordenada: ";
        for (int i = 0; i < lista.size(); ++i) {
            std::cout << lista[i] << " ";
        }
        std::cout << "\n";
    }

private:
    int n;
    int numeroBuscado;
    std::vector<int> lista;
};

int main() {
    OrdenamientoBusqueda ob;
    ob.ingresarDatos();
    ob.ordenarLista();
    ob.buscarNumero();

    return 0;
}
