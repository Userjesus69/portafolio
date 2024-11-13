# Este programa utiliza una función anidada para sumar dos números, donde el valor de x se almacena en la función externa
def outer_function(x):
    def inner_function(y):
        return x + y
    return inner_function

result = outer_function(5)(10)
print(result)  # Salida: 15
