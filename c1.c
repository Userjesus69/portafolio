#include <stdio.h>
#include <stdlib.h>
int main() {//para saber si un numero es positivo//
    int numero;
    printf("Ingrese un n�mero: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El n�mero es positivo.\n");
    }
    
    return 0;
}

