//Punteros triples
// Investigar estructuras de datos sin nodos de cabecera 
#include <stdio.h>

int main(){
    int arreglo[5];  
    int *ptr1, **ptr2, ***ptr3;
    int variable1, variable2;

    ptr1=arreglo; 
    ptr2=&ptr1;
    for (ptr3 = &ptr2; **ptr3 < &arreglo[5]; **ptr3=**ptr3+1){
        printf("Introduce un entero");
        scanf("%d", **ptr3);
        /* como cambio la prosedencia? miltiplicacion y despues suma y resta  */

    }
    for (ptr1 = arreglo, ptr2=&ptr1, ptr3=&ptr2; **ptr3 < &arreglo[5]; (**ptr3)++)//analizar la ultima  iteracion 
    printf("\n En la celda %d esta el valor %d en la direccion %p");
    ((int)(**ptr3-arreglo), ***ptr3, *ptr3);
    
    
    return 0;
}