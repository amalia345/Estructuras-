//APUNTADORES
#include <stdio.h>
int main()
{
    int arreglo[5];
    int i;
    int *pointer;
    for ( i = 0; i < 5; i++){
        /* code */
        if (i==0)
        {
            printf("\nIngresa un entero:");
        }
        else
        {
            printf("\nIngresa otro entero:");
        }
        
        scanf("%d", &arreglo[i]);

    }
    for ( i = 0; i < 5; i++)
    {   
        printf("\nIn en la celda %d está el valor %d em la direccion %lu", i, arreglo[i], &arreglo[i]);
        /* %lu LOng inside, con linux funcion %p */
    }
    for ( pointer = &arreglo[0]; pointer <&arreglo[5]; pointer=pointer+1) /* arreglo= &arreglo[0] el nombre del arreglo solo es un puntero constante */
    {
        printf("\nIngrese datos enteros:");
        scanf("%d", pointer);

        printf("\nEn la celda %d esta el valor %d en la direccion %lu", (int)(pointer-arreglo), *pointer,pointer );//La resta va a dar como resultado 3 
        /* CAST: De un entero grande a uno pequeño, comprimir el entero, siempre y cuando entre y Tiene que ser el mismo de dato */
    }
    
    return 0;
}
