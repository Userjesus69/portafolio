#include <stdio.h>

Int main() {
    Int n, a = 0, b = 1, siguiente;
    Printf("Introduce el número de términos de la serie Fibonacci: ");
    Scanf("%d", &n);
    Int i = 1;
    Do {
        Printf("%d ", a);
        Siguiente = a + b;
        A = b;
        B = siguiente;
        I++;
    } while (i <= n);
    Return 0;
}

