#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void llenaArreglo(int** arr, int* arr_size);
void imprimeArreglo(int** arr, int* arr_size);
void shellSort(int** arr, int* arr_size);

int main() {
    int arr_size = 10;
    int* arr = (int*)malloc(arr_size * sizeof(int));


    llenaArreglo(&arr, &arr_size);


    printf("Array original:\n");
    imprimeArreglo(&arr, &arr_size);


    shellSort(&arr, &arr_size);


    printf("Array ordenado:\n");
    imprimeArreglo(&arr, &arr_size);


    free(arr);

    return 0;
}

void llenaArreglo(int** arr, int* arr_size) {
    srand(time(NULL));
    for (int* ptr = *arr; ptr < *arr + *arr_size; ptr++) {
        *ptr = rand() % 100;
    }
}

void imprimeArreglo(int** arr, int* arr_size) {
    for (int* ptr = *arr; ptr < *arr + *arr_size; ptr++) {
        printf("%d ", *ptr);
    }
    printf("\n");
}

void shellSort(int** arr, int* arr_size) {
    int gap = *arr_size / 2; // Inicializar el intervalo
    while (gap > 0) {
        int* end = *arr + *arr_size; // Puntero al final del arreglo
        for (int* i = *arr + gap; i < end; i++) {
            int temp = *i; // Guardar el valor actual
            int* j = i;

            // Desplazar elementos mayores hacia adelante
            while (j >= *arr + gap && *(j - gap) > temp) {
                *j = *(j - gap); // Mover elemento
                j -= gap; // Retroceder por el intervalo
            }

            *j = temp; // Insertar el valor temporal en la posición correcta
        }
        // Reducir el tamaño del intervalo
        gap /= 2;
        // Imprimir el estado del arreglo después de cada paso
        printf("Después de gap = %d:\n", gap);
        imprimeArreglo(arr, arr_size);
    }
}