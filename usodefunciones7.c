#include <stdio.h>
#include <stdbool.h>
//Función para verificar si un número es primo
bool es_primo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    printf("%d\n", es_primo(7));  // Salida: 1 (True)
    return 0;
}
