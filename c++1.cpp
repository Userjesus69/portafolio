#include <iostream>
int main() { //para saber si un numero es posotivo//
    int num;
    std::cout << "Ingrese un número: ";
    std::cin >> num;

    if (num > 0) {
        std::cout << "El número es positivo." << std::endl;
    }

    return 0;
}
