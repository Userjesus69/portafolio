#include <stdio.h>
#include <stdlib.h>
int main() {//para saber si un numero es positivo//
    int numero;
    printf("Ingrese un número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf("El número es positivo.\n");
    }
    
    return 0;
}

