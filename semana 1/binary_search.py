#2. Buscar un elemento en una lista ordenada usando búsqueda binaria:
#Notación Big O: O(log n) (donde "n" es el tamaño de la lista)

def binary_search(arr, target):
    low, high = 0, len(arr) - 1

    while low <= high:
        mid = (low + high) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            low = mid + 1
        else:
            high = mid - 1

    return -1

# Ejemplo de uso:
sorted_list = [11, 12, 22, 25, 64]
target_element = 22
result = binary_search(sorted_list, target_element)
print("Elemento encontrado en la posición:", result)
