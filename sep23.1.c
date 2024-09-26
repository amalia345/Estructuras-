/*Programa una funcion que ingrese 5 elementos desde el teclado y otra que los imprima 
-Usar un menu*/
#include <stdlib.h>
#include <stdio.h>
#define TAM 5

struct Datos{
    int Arreglo[TAM];
    int *ptr;

    /* data */
};
int menu();
int meterDatos(struct Datos *ptrs);
int imprimeDatos(struct Datos *ptrs);

int main(){
    struct Datos datos, *miptrs;
    miptrs = &datos;  
for ( ; ;){
    switch (menu()){
    case 1:
        meterDatos(miptrs);
        break;
    case 2:
        imprimeDatos(miptrs);
        break;
    case 3:
        exit(0);
    
    default:
        printf("Ingrese solo del 1 al 3");
        return 0;
    }
    
}

    return 0; 
}
int meterDatos(struct Datos *ptrs){
    for (ptrs->ptr=ptrs->Arreglo; ptrs->ptr < &ptrs->Arreglo[TAM]; ptrs->ptr++){
            printf("Ingrese un entero: \n");
            scanf("%d", ptrs->ptr);

            /* code */
    }
    return 0;  
    }
int imprimeDatos(struct Datos *ptrs){
    for (ptrs->ptr=ptrs->Arreglo; ptrs->ptr< &ptrs->Arreglo[TAM]; ptrs->ptr++)
        printf("\nEn la celda %d esta el valor %d en la direccion %lu", 
        (int)(ptrs->ptr-ptrs->Arreglo), *ptrs->ptr, (long int) ptrs->ptr);
        return 0;
        /* code */
    
}
    



int menu(){
    int opc; 
    printf("\n 1 para meter datos");
    printf("\n 2 para imprimir datos");
    printf("\n 3 para salir");
    printf("Ingrese la opcion:");
    scanf("%d", &opc);
    return opc;
}

