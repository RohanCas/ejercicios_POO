#5. Calcular la serie de Fibonacci de forma recursiva:
#Notación Big O: O(2^n) (donde "n" es la posición en la serie de Fibonacci)

def fibonacci_recursive(n):
    if n <= 1:
        return n
    else:
        return fibonacci_recursive(n-1) + fibonacci_recursive(n-2)

# Ejemplo de uso:
position = 6
result = fibonacci_recursive(position)
print(f"El elemento en la posición {position} de la serie de Fibonacci es: {result}")



