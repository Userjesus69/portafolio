#include <stdio.h>

// Este programa define una estructura Estudiante que incluye otra estructura Persona, y muestra los datos de un estudiante
struct Persona {
    char nombre[50];
    int edad;
};

struct Estudiante {
    struct Persona datos;
    int matricula;
};

int main() {
    struct Estudiante est1 = {{"Juan", 20}, 12345};
    printf("Nombre: %s\nEdad: %d\nMatrícula: %d\n", est1.datos.nombre, est1.datos.edad, est1.matricula);
    return 0;
}

