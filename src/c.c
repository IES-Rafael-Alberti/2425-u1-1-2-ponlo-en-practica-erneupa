#include <stdio.h>

int main() {
    char nombre[50]; 

    printf("Escribe tu nombre: "); 
    scanf("%s", nombre);

    printf("Hola!! %s. Este programa esta hecho en el lenguaje de programacion C.\n", nombre); 

    return 0;
}