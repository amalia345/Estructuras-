
/*Funciones en C.
En seccion de codigo que realiza una tarea específica.
Se recomienda tener un valor de retorno.- A esto se le llama encapsulacion de codigo -->MODULARIDAD(Modulos) 
Libro LENGUAJES DE PROGRAMACION- SETHI
Qué cosa es un awk? o g awk?*/
#include <stdio.h>
//Creamos una función longitud de cadena con el uso de apuntadores, con una cadena o arreglo de caracteres *cahr=el primer elemento de la cadena, depsues pasa por el arreglo y lade como entero.
//Paso por referencia char* 
int LongitudCadena(char *ptr){
    char*ptri;
    ptri=ptr;
    for (; *ptr='\0'; ptr=ptr+1);
    return((int)(ptr - ptri));

    /* code */
}


int main(){
    char cadena[30];
    printf("\nIngresa cadena");
    gets(cadena);
    printf("\nEl tamaño de%s es %d");
    cadena,(LongitudCadena(cadena));//ptr=cadena
    /* code */
    return 0;
}
