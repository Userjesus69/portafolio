# Solicita el número para calcular su factorial
Num = int(input("Ingresa un número para calcular su factorial: "))
# Inicializa las variables
Factorial = 1
Contador = 1
# Bucle para calcular el factorial
while Contador <= Num:
    Factorial *= Contador
    Contador += 1
# Muestra el resultado
print(f"El factorial de {Num} es: {Factorial}")
