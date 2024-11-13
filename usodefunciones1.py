#Función para calcular el factorial de un número

def factorial(n):
    if n == 0:
        return 1
    return n * factorial(n - 1)

print(factorial(5))  # Salida: 120
