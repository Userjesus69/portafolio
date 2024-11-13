# Solicita el número de términos
N = int(input("Ingresa un número: "))
# Inicializa la variable suma
Suma = 0
# Bucle para sumar los primeros N números
for i in range(1, N + 1):
    Suma += i
# Muestra el resultado
print(f"La suma de los primeros {N} números es: {Suma}")
