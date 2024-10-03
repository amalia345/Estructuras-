
//Uso de los dobles apuntadores
#include <stdio.h>
struct persona{

    /* data */
    char nombre; 
    float estatura;
    char sexo; 
    int edad;
};
int main(){
    /* code */
    struct persona arreglo[5];
    struct persona *ptr1, **ptr2; 

    for (ptr1 = arreglo, ptr2=&ptr1; ptr2 < &arreglo[5]; ptr2=ptr2+1){

        /* code */
        printf("\n Ingrese su nombre:");
        gets((*ptr2)->nombre);
        printf("\nIngresa tu edad:");
        scanf("%d",&(*ptr2) ->edad);
        printf("\nIngresa tu estatura:");
        scanf("%f", &(*ptr2)->estatura);
        printf("\nIngresa tu sexo:");
        (*ptr2)->sexo=getchar();
    }

    for (ptr1 = arreglo, ptr2=&ptr1; ptr2 < &arreglo[5]; ptr2=ptr2+1){
        /* code */
        printf("\nEn la celda %d esta el nombre %s en la direccion %lu",(int)(*ptr2-arreglo), ptr->nombre, &(*ptr2)->nombre);
        printf("\nEn la celda %d esta la esatura %f en la direccion %lu",(int)(*ptr2-arreglo), ptr->estatura, &(*ptr2)->estatura);
        printf("\nEn la celda %d esta la edad %d en la direccion %lu",(int)(*ptr2-arreglo), ptr->edad, &(*ptr2)->edad);
        printf("\nEn la celda %d esta el sexo %c en la direccion %lu",(int)(*ptr2-arreglo), ptr->sexo, &(*ptr2)->sexo);
    }   

    return 0;
}

