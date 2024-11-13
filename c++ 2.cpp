#include <iostream>
int main() {//para saber si un numero es par//
    int num;
    std::cout << "Ingrese un número: ";
    std::cin >> num;

    if (num % 2 == 0) {
        std::cout << "El número es par." << std::endl;
    }

    return 0;
}
