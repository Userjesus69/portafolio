#include <iostream>
using namespace std;

// Este programa utiliza una clase con métodos para sumar dos números y realizar una operación adicional con el resultado
class Calculadora {
public:
    int sumar(int a, int b) {
        return a + b;
    }

    int operar(int x, int y) {
        return sumar(x, y) * 2;
    }
};

int main() {
    Calculadora calc;
    cout << "Resultado: " << calc.operar(5, 3) << endl;
    return 0;
}

