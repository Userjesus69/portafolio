#include <stdio.h>

// Este programa verifica si x está en el rango entre 5 y 15, o si es mayor o menor que estos valores
int main() {
    int x = 10;
    if (x > 5) {
        if (x < 15) {
            printf("x está entre 5 y 15\n");
        } else {
            printf("x es mayor o igual a 15\n");
        }
    } else {
        printf("x es menor o igual a 5\n");
    }
    return 0;
}

