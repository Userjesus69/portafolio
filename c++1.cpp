#include <iostream>
int main() { //para saber si un numero es posotivo//
    int num;
    std::cout << "Ingrese un n�mero: ";
    std::cin >> num;

    if (num > 0) {
        std::cout << "El n�mero es positivo." << std::endl;
    }

    return 0;
}
