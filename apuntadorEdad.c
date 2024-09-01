#include <stdio.h>
// Direccion dememoria - apuntador 
int main()
{
    int edad; 
    edad=95;
    int *apuntadorEdad; 
    apuntadorEdad=&edad;
    edad=100;
    printf ("La edad es: %d \n", edad);
    printf ("La edad es: %d \n", *apuntadorEdad);
    printf("Dirección de memoria de la edad: %p\n", *apuntadorEdad);

    return 0;
}


