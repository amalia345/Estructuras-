//Programa donde puedes reercribir valores d eun arreglo via apuntadores
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};  // Un arreglo de 5 enteros
    int *ptr;                           // Un puntero a entero
    ptr = arr;                          // El puntero apunta al primer elemento del arreglo

    // Recorriendo el arreglo usando el puntero y mostrando los valores iniciales
    printf("Valores iniciales del arreglo:\n");
    for(int i = 0; i < 5; i++) {
        printf("Elemento %d: Valor = %d, Dirección = %p\n", i, *(ptr + i), (ptr + i));
    }

    // Cambiando los valores del arreglo según el usuario
    printf("\nIntroduce nuevos valores para el arreglo:\n");
    for(int i = 0; i < 5; i++) {
        printf("Introduce un nuevo valor para el elemento %d: ", i);
        scanf("%d", (ptr + i));  // El usuario introduce el nuevo valor que se guarda en el arreglo
    }

    // Mostrando los nuevos valores del arreglo
    printf("\nValores actualizados del arreglo:\n");
    for(int i = 0; i < 5; i++) {
        printf("Elemento %d: Valor = %d, Dirección = %p\n", i, *(ptr + i), (ptr + i));
    }

    return 0;
}