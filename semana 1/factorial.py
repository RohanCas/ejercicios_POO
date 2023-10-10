#4. Calcular el factorial de un número de forma recursiva:
#Notación Big O: O(n) (donde "n" es el número para calcular el factorial)

def factorial_recursive(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * factorial_recursive(n-1)

# Ejemplo de uso:
num = 5
result = factorial_recursive(num)
print(f"Factorial de {num}: {result}")
