#include <stdio.h>
#include <stdlib.h>
int main() {
    int edad;
    printf("Ingrese su edad: ");
    scanf("%d", &edad);

    if (edad >= 18) {
        printf("Eres mayor de edad.\n");
    }

    return 0;
}
