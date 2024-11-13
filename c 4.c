#include <stdio.h>
#include <stdlib.h>
int main() {//para saber si es una vocal//
    char letra;
    printf("Ingrese una letra: ");
    scanf(" %c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        printf("La letra es una vocal.\n");
    }

    return 0;
}
