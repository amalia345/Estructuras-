//Uso de un apuntador
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
    struct persona *ptr1; 

    for (ptr = arreglo; ptr < &arreglo[5]; ptr=ptr +1){

        /* code */
        printf("\n Ingrese su nombre:");
        gets(ptr->nombre);
        printf("\nIngresa tu edad:");
        scanf("%d",ptr ->edad);
        printf("\nIngresa tu estatura:");
        scanf("%f", ptr->estatura);
        printf("\nIngresa tu sexo:");
        ptr->sexo=getchar();
    }

    for (ptr = arreglo; ptr < &arreglo[5]; ptr=ptr+1){
        /* code */
        printf("\nEn la celda %d esta el nombre %s en la direccion %lu",(int)(ptr-arreglo), ptr->nombre, ptr->nombre);
        printf("\nEn la celda %d esta la esatura %f en la direccion %lu",(int)(ptr-arreglo), ptr->estatura, ptr->estatura);
        printf("\nEn la celda %d esta la edad %d en la direccion %lu",(int)(ptr-arreglo), ptr->edad, ptr->edad);
        printf("\nEn la celda %d esta el sexo %c en la direccion %lu",(int)(ptr-arreglo), ptr->sexo, ptr->sexo);
    }   

    return 0;
}