#include <iostream>
#include <algorithm>
using namespace std;
//Función para invertir una cadena
string invertir_cadena(string cadena) {
    reverse(cadena.begin(), cadena.end());
    return cadena;
}

int main() {
    cout << invertir_cadena("hola") << endl;  // Salida: "aloh"
    return 0;
}
