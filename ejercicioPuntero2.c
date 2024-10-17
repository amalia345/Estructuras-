#include <stdio.h>

int main() {
    int arreglo[5] = {10, 20, 30, 40, 50};  // Un arreglo de 5 enteros
    int *ptr;                           // Un puntero a entero
    ptr = arreglo;                          // El puntero apunta al primer elemento del arreglo

    // Recorriendo el arreglo usando el puntero
    for(int i = 0; i < 5; i++) {
        printf("Elemento %d: Valor = %d, Dirección = %p\n", i, *(ptr + i), (ptr + i));
    }

    return 0;
}
