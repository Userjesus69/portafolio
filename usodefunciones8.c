#include <stdio.h>
//Función para encontrar el máximo común divisor (MCD)
int mcd(int a, int b) {
    while (b) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    printf("%d\n", mcd(48, 18));  // Salida: 6
    return 0;
}
