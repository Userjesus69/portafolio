#include <iostream>
using namespace std;

// Este programa identifica e imprime las posiciones en una matriz 3x3 donde los índices de fila y columna son iguales (diagonal)
int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            if (i == j) {
                cout << "Diagonal en: " << i << ", " << j << endl;
            }
        }
    }
    return 0;
}

