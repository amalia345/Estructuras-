/* Hacer ejercicios INstancias con indices 
1. Usando puros indices
2. PUntero dentro de la estructura y puntero dentro del main 
//Indice en la estructura y con puntero afero
3. Puntero adentro de la estructur (Funcionando )

*/ 
/*
*/

#include <stdio.h>

struct Datos{
    int arreglo[5]; 
    int *ptr;

    /* data */
};int main(){
    /* code */
    struct Datos datos, *ptr;
    ptrs=&datos;

    for (ptrs-> ptr = ptrs -> arreglo; ptrs->ptr< &ptrs-> arreglo[5]; ptrs-ptr ++){

        /* la flecha es el selector 
        Na celda es una instancia 
        */
        printf("\nIngrasa un entero:\n");
        scanf("%d", ptrs->arreglo[ptrs->i]); 

    }
    for (ptrs-> ptr = ptrs -> arreglo; ptrs->ptr< &ptrs-> arreglo[5]; ptrs-ptr ++){
        /* code 
        printf("\nEN la celda %d esta el valor%d en la direccion %lu\n}",(int)(ptrs->ptr-ptrs->arreglo),*ptrs->ptr, ptrs->);
    i maneja la celda*/
        printf("\nEN la celda %d esta el valor%d en la direccion %lu\n}", ptrs->i, ptrs->arreglo[ptrs->i], &ptrs->arreglo[ptrs->1] );
    }
    
    return 0;

}
/* Hacer otro de tarea con este codigo cambiar un puntero por un indice entero for(ptrs->i=0; ptrs->i<5; ptrs->i=)
Falta la de instancia y puntero */


