#include <iostream>
int main() {//para saber si la letra es un vocal//
    char letra;
    std::cout << "Ingrese un carácter: ";
    std::cin >> letra;

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        std::cout << "Es una vocal." << std::endl;
    }

    return 0;
}
