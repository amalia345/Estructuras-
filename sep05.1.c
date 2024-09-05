//Programa que da la longitu de una cadena 
//nombre de1 arreglo de una cadena costante 

#include <stdio.h>

int main(){
    /* code */
    char cadena[30],*ptr;
    int tamaño;
    printf("Ingresa cadena: ");
    fgets(cadena,30,stdin);
    //!='?n';
    
    //gets(&cadena[0]);//Esta es la direccion de inicio // es lo mismo (cad)
    for ( ptr = cadena; *ptr!='\n'; ptr=ptr+1);
        tamaño = (int)(ptr - cadena);//(int)=CAST
        /* code */
    printf("\nEl tamaño de %s, en %d", cadena, tamaño);

    

    

    return 0;
}                  


///n linuxx: mientras seas diferente d ediagonal n fgets(cad, 30, stdin); o !='\n'
// un puntero es una pariable lu, se le pone un cast aa entero 