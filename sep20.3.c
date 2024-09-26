//Concatenación con funcion
#include <stdio.h>

int concatCad (char*,char*);//Prototipo de la funcion 

int main(){
    char cadena1[30],cadena2[30];
    printf("Ingrese cadena1:");
    fgets(cadena1, 30,stdin);
    printf("Ingrese cadena 2;");
        fgets(cadena2, 30,stdin);
    printf("La cadena en %s",cadena1);
    /* code */
    return 0;
}

int concatCad (char* ptr1,char* ptr2){ //Funcion
    for ( ; *ptr1!='\n'; ptr1=ptr1+1);
    for( ; *ptr2!='\n'; ptr1=ptr1+1,  ptr2=ptr2+1)
        *ptr1=*ptr2;
        *ptr1='\0';
        return 0;
    
}