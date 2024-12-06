//Utilizando le damos la base y el exponente pero de manera recursuva ma la n VmeZ+ 
#include<stdio.h>
//Funcion rcursiva para calcular el factorial de un numero 
int factorial(int n){
    if(n <= 1)
        return 1;
    else 
        return n*factorizacion(n-1);

}
//Funcion recursiva para calcular la potencia de base a un exponente 
int potencia( int base, int exponente){
    if (exponente == 0)
        return 1;
    else
        return base*potencia(base, exponente -1);
}

int main(){
    /* code */
    int base, exponente, numero;
    printf("\n Ingrese la base para la potencia");
    scanf("%d",&base);

    printf("\n Ingrese el exponente de la potencia");
    scanf("%d",&exponente);

    printf("\n Ingrese un numero para calcular su factorial ");
    scanf("%d",&numero);

    int resultadoPOtencia= potencia(base, exponente);
    int resultadoFactorial =factorial(numero);
    printf("\n El factorial de %d es %lu", numero, factorial(numero));
    return 0;
}


}