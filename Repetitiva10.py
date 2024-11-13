# Rango de números
Inicio = int(input("Ingresa el número de inicio: "))
Fin = int(input("Ingresa el número de fin: "))
# Bucle para verificar cada número en el rango
for num in range(Inicio, Fin + 1):
    if num < 2:
        continue  # Ignora los números menores a 2
    es_primo = True
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            es_primo = False
            break
    if es_primo:
        print(f"{num} es un número primo")
