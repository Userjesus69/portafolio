#include <stdio.h>
#include <stdlib.h>
int main() {//para saber si un numero es par//
    int numero;
    printf("Ingrese un n�mero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("El n�mero es par.\n");
    }

    return 0;
}
