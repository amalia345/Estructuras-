//Estrctura declarando un puntero 
#include <stdio.h>
struct Datos
{
    int arreglo[5];
    int *ptr;
    //EL puntero manipula cada celda

};
int main(){
    /* code */
    struct Datos datos;
    for ( datos. ptr = datos.arreglo; datos.ptr< &datos.arreglo [5]; datos.ptr=datos.ptr+1){
        /* code */
        printf("\nIngrse un entero");
        scanf("%d", datos.ptr);
        //Scanf te envia la dereccion de memoria

    }

    for (datos. ptr = datos.arreglo; datos.ptr< &datos.arreglo [5]; datos.ptr=datos.ptr+1)//lo mismo de arreba
    printf("\nEN la celda %d esta el valor %d en la direccion %lu", (int)(datos.ptr-datos.arreglo),*datos.ptr, datos.ptr);
    //falta ponerle una estructura,estudiar
    
    return 0;
}
