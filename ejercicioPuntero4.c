//1. Imprimir números del 1 al 10 con punteros

//Escribe un programa que use un puntero y un bucle for para imprimir los números del 1 al 10.
//Ejemplo:


#include <stdio.h>

int main() {
    int i;
    int *ptr = &i;
    for (*ptr = 1; *ptr <= 10; (*ptr)++) {
        printf("%d\n", *ptr);
    }
    return 0;
}