#include <iostream>
int main() {//para saber si un numero es par//
    int num;
    std::cout << "Ingrese un n�mero: ";
    std::cin >> num;

    if (num % 2 == 0) {
        std::cout << "El n�mero es par." << std::endl;
    }

    return 0;
}
