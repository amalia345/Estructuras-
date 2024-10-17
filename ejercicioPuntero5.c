//2. Suma de dos números con punteros

//Crea un programa que pida al usuario que introduzca dos números y luego muestre su suma usando punteros.
//Ejemplo:

#include <stdio.h>

int main() {
    int a, b, suma;
    int *ptrA = &a, *ptrB = &b, *ptrSuma = &suma;

    printf("Introduce el primer número: ");
    scanf("%d", ptrA);
    printf("Introduce el segundo número: ");
    scanf("%d", ptrB);

    *ptrSuma = *ptrA + *ptrB;
    printf("La suma es: %d\n", *ptrSuma);

    return 0;
}
