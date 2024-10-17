#include <stdio.h>

int main() {
    int valor = 42;      // Declaramos una variable entera
    int *ptr;            // Declaramos un puntero a entero

    ptr = &valor;        // El puntero almacena la dirección de 'valor'
//&ASIGNA AL PUNTERO LA DIRECCION DE LA VARIABLEME 
    // Mostramos la información
    printf("El valor de la variable: %d\n", valor);          // Muestra 42
    printf("La dirección de la variable: %p\n", &valor);     // Muestra la dirección de 'valor'
    printf("El valor almacenado en el puntero: %p\n", ptr);  // Muestra la misma dirección
    printf("El valor al que apunta el puntero: %d\n", *ptr); // Muestra 42, el valor al que apunta

    return 0;
}