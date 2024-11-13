#Función para encontrar el máximo común divisor (MCD)

def mcd(a, b):
    while b:
        a, b = b, a % b
    return a

print(mcd(48, 18))  # Salida: 6
