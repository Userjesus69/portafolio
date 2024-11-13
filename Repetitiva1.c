#include <stdio.h>

Int main() {
    Int n;
    Printf("Introduce un número para ver su tabla de multiplicar: ");
    Scanf("%d", &n);
    For (int i = 1; i <= 10; i++) {
        Printf("%d x %d = %d\n", n, i, n * i);
    }
    Return 0;
}

