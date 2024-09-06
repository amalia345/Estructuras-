//Estudiar dobles apuntadores  
// Te debe de undicaer la celda el valor ingresado y la direccion de memoria

#include <stdio.h>

int main(){
    int arreglo[5]; //Variable igual a 5 numeros 
    int *ptr1, **ptr2;
    int variable1, variable2;

    ptr1=arreglo; //esta es igual a &variable
    //ptr1= &variable1; &- Es un operador de direccion
    /**ptr2= &ptr1;
    variable2 = **ptr2; **- Es un operador de Indireccion  */
    for (ptr2 = &ptr1; *ptr2 < &arreglo[5]; *ptr2=*ptr2+1){
        printf("Introduce un entero");
        scanf("%d", *ptr2);
        /* como cambio la prosedencia? miltiplicacion y despues suma y resta  */

    }
    for (ptr1 = arreglo, ptr2=&ptr1; *ptr2 < &arreglo[5]; *ptr2=*ptr2+1) //analizar la ultima  iteracion 
    printf("\n En la celda %d esta el valor %d en la direccion %lu", (int)(*ptr2-arreglo), **ptr2, *ptr2);

   
    //casteo hacerlo de grande a pequeño 
    
    


    return 0;
}
 


