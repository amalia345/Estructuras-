/*Concatenación de cadenas
SUponinedo que tienees la palabra hola mundo en dos puntros 1 y 2, entonces con un for recorremos 
hasta que encuentre el cambio de linea y en el segundo for copia y entonces el puntero 2 se va a 
poner en seguida del ptr1 y va a gregar el final de linea
Hace lo mismo que la funcion str cat()*/

#include <stdio.h>

int main(){
    char cadena1[30],cadena2[30];
    char *ptr1, *ptr2;
    printf("Ingrese cadena1:");
    fgets(cadena1, 30,stdin);
    printf("Ingrese cadena 2;");
        fgets(cadena2, 30,stdin);
    
    for(ptr1=cadena1; *ptr1!='\n'; ptr1=ptr1+1);
    for(ptr2=cadena2; *ptr2!='\n'; ptr1=ptr1+1, ptr2=ptr2+1)
        *ptr1=*ptr2;
        *ptr1='\n';
    printf("La cadena en %s",cadena1);


    /* code */
    
    return 0;
}

























































