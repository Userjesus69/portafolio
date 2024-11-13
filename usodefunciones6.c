#include <stdio.h>
//Función para calcular el factorial de un número
int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    printf("%d\n", factorial(5));  // Salida: 120
    return 0;
}
