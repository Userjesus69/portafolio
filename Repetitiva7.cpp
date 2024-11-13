#include <iostream>
#include <string>
Using namespace std;

Int main() {
    String palabra, invertida;
    Cout << "Introduce una palabra: ";
    Cin >> palabra;
    Int i = palabra.length() - 1;
    Do {
        Invertida += palabra[i];
        i--;
    } while (i >= 0);
    Cout << "La palabra invertida es: " << invertida << endl;
    Return 0;
}

