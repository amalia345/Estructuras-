//utilizar rtr rev
//utilizar puros punteros para cambiar de lugar una cadena, 
//en el ultimo elemento escriir la cadena al reverso mundo-- odnum
//El programa tiene que mover de lugar 

// con una pila se usan un solo puntero 
#include <stdio.h>


int main(){
    /* code */
    char cadena[30],*ptr1, *ptr2, variableAuxiliar;
    int tamaño;
    printf("Ingresa cadena: ");
    *fgets(cadena,30,stdin);
    //con linux se debe de poner !='\n';
    //gets(&cadena[0]);//Esta es la direccion de inicio // es lo mismo (cad)
    for ( ptr2 = cadena; *ptr2!='\n'; ptr2=ptr2+1);
    for ( ptr1 = cadena, ptr2=ptr2-1; ptr1<ptr2; ptr1=ptr1+1, ptr2=ptr2-1){
        variableAuxiliar=*ptr2; 
        *ptr2=*ptr1;
        *ptr1=variableAuxiliar;

    }
    printf("\nLa cadena es ahora %s", cadena);

return 0;
}       
