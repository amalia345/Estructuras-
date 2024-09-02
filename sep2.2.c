//APUNTADORES
#include <stdio.h>
int main()
{
    int arreglo[5];
    int i;
    int *ptr;
    for ( i = 0; i < 5; i++){
        /* code */
        printf("\nIngreses un entero:");
        scanf("%d", &arreglo[i]);

    }
    for ( i = 0; i < 5; i++)
    {   
        printf("\nIn en la celda %d está el valor %d em la direccion %lu", i, arreglo[i], &arreglo[i]);
        /* %lu LOng inside, con linux funcion %p */
    }
    for ( ptr = &arreglo[0]; ptr <&arreglo[5]; ptr=ptr+1) /* arreglo= &arreglo[0] el nombre del arreglo solo es un puntero constante */
    {
        printf("\nIngrese datos enteros:");
        scanf("%d", ptr);

        printf("\nEn la celda %d esta el valor %d en la direccion %lp", (int)(ptr-arreglo), *ptr,ptr );//La resta va a dar como resultado 3 
        /* CAST: De un entero grande a uno pequeño, comprimir el entero, siempre y cuando entre y Tiene que ser el mismo de dato */
    }
    
    return 0;
}
