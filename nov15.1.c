/*
RECURSION
Iterativa. usando sor, while y do while
Partimos de la maquina de Turing- On computable numbers, 1936- Gran Bretaña
Otro ejemplO- Maquina de POst- Upensky 1936- Union Sovietica
Funciones recursivas parciales 
ALonso Chrch->Calculo lamhada
Tesis- Church Turing
*/
#include<stdio.h>
int factorial(int n){
    if(n==0)
        return 1;
    else
    return(n*factorial(n-1));
}
int main()
{
    /* code */
    int numero; 
    printf("\n Ingrese un entero ente 0 y 15");
    scanf("%d",&numero);
    printf("\n El factorial de %d es %lu", numero, factorial(numero));
    return 0;
}
