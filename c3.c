#include <stdio.h>
#include <stdlib.h>
int main() {//para saber si un numero es par//
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("El número es par.\n");
    }

    return 0;
}
