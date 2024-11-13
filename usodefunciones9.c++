#include <iostream>
#include <vector>
using namespace std;
//Función para sumar todos los elementos de un vector
int suma_vector(const vector<int>& vec) {
    int suma = 0;
    for (int num : vec) {
        suma += num;
    }
    return suma;
}

int main() {
    vector<int> numeros = {1, 2, 3, 4};
    cout << suma_vector(numeros) << endl;  // Salida: 10
    return 0;
}
