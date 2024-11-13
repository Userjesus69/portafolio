# Este programa define una función que imprime la tabla de multiplicar de un número, y luego llama a esa función para varios números
def multiplicar_tabla(numero):
    for i in range(1, 11):
        print(f"{numero} x {i} = {numero * i}")

for j in range(2, 5):
    print(f"Tabla de multiplicar de {j}")
    multiplicar_tabla(j)
