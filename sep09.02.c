//Arreglo con 5 celda cone l tipo de dato Persona 

//Con Instancias o variable
#include <stdio.h>
struct persona{
    char nombre[30];
    int edad; 
    float estatura;
    char sexo; 

    /* data */
};
int main(){
    struct persona arreglo[2];
    int i;
     for ( i = 0; i < 2; i=i+1){
        printf("Ingresa tu nombre:");
        fflush(stdin);//limpia el teclado
        gets(arreglo[i].nombre);
        fflush(stdin);//limpia el teclado
        printf("Ingresa tu edad:");
        fflush(stdin);//limpia el teclado
        scanf("%d", &arreglo[i].edad);
        fflush(stdin);//limpia el teclado
        printf("Indica tu esatura:");
        fflush(stdin);//limpia el teclado
        scanf("%f", &arreglo[i].estatura);
        fflush(stdin);//limpia el teclado
        printf("Ingresa tu sexo");
        fflush(stdin);//limpia el teclado
        arreglo[i].sexo=getchar();
        fflush(stdin);//limpia el teclado
        

        /* code */
     }
     printf("\nEl tamaño de la persona es %d", sizeof(struct persona));
     printf("\nLa direccion del inicio del arreglo es %lu", arreglo);

     for ( i = 0; i < 2; i++){
        printf("\nEN la celda %d esta el nombre %s en la direccion %lu", i, arreglo[i].nombre, &arreglo[i].nombre);
        printf("\nEN la celda %d esta la edad %d en la direccion %lu", i, arreglo[i].edad, &arreglo[i].edad);
        printf("\nEN la celda %d esta la estatura %f en la direccion %lu", i, arreglo[i].estatura, arreglo[i].estatura);
        printf("\nEN la celda %d esta el sexo%c en la direccion %lu", i, arreglo[i].sexo, arreglo[i].sexo);
        
        /* code */
     }
     
     
    /* code */
    return 0;
}

