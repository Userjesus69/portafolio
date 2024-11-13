#include <stdio.h>

// Este programa imprime si los números del 1 al 5 son pares o impares, usando bucles y condicionales anidados
int main() {
    for (int i = 1; i <= 5; i++) {
        if (i % 2 == 0) {
            printf("%d es par\n", i);
        } else {
            printf("%d es impar\n", i);
        }
    }
    return 0;
}

