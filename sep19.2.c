//Retoro Inverso de cadena, o regresa la cadena palindromo, break, estudiar eso, retorna 1 o 0

#include <stdio.h>

void InversaCadena(char*ptr1){
    char*ptr2, VariableAuxiliar;
    for(ptr2=ptr1; *ptr2!='\0'; ptr2=ptr2+1);
    for (ptr2 =ptr2-1; ptr1 < ptr2; ptr2=ptr2+1){

        /* code */
        VariableAuxiliar=*ptr2;
        *ptr2=*ptr1;
        *ptr1=VariableAuxiliar;
    }
    return 0;
}

int main(){

    /* code */
    char cadena[30];
    printf("\nIngresa una cadena");
    gets(cadena);
    InversaCadena(cadena);
    printf("\nLa cadena en %s", cadena);
    return 0;
}
