#include <iostream>
using namespace std;

// Este programa imprime si los n�meros del 1 al 5 son pares o impares, usando bucle y condicionales anidados
int main() {
    for (int i = 1; i <= 5; i++) {
        if (i % 2 == 0) {
            cout << i << " es par" << endl;
        } else {
            cout << i << " es impar" << endl;
        }
    }
    return 0;
}

