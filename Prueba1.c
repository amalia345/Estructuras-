#include <stdio.h>
/*Escribe un programa en C que realice las siguientes tareas:

    Declaración y definición de funciones:
        Función contarVocales: Esta función recibirá una cadena de caracteres y devolverá 
        un arreglo de enteros con la frecuencia de cada vocal (a, e, i, o, u).
        Función imprimirFrecuencia: Esta función recibirá un arreglo de enteros y mostrará 
        en pantalla la frecuencia de cada vocal.

    Manipulación de cadenas:
        Solicitar al usuario que ingrese una cadena de caracteres.
        Convertir la cadena a minúsculas (si no lo está) para evitar diferencias de mayúsculas y 
        minúsculas.
        Usar la función contarVocales para calcular la frecuencia de las vocales en la cadena 
        ingresada.
        Mostrar la frecuencia de cada vocal usando la función imprimirFrecuencia.*/

int cuentaVocales(char cadena[]);

int main()
    {
        char cadenita[50];
        printf("Hola dame una palabra");
        scanf("%s", cadenita);
        cuentaVocales(cadenita);
        return 0;
    }

int cuentaVocales(char cadena[]){
    printf("Dentro de la funcion");
    printf("%c",cadena[0]); //Imprime el elemento 0 del string

int contadorA=0;
int contadorE=0;
int contadorI=0;
int contadorO=0;
int contadorU=0;
int consonantes=0;

    for (int i = 0; cadena[i]!='\0'; i++){
        if (cadena[i]=='a'){
            contadorA++;
        }
        else if (cadena[i]=='e'){
            contadorA++;
        }
        else if (cadena[i]=='i'){
            contadorA++;
        }
        else if (cadena[i]=='o'){
            contadorA++;
        }
        else if (cadena[i]=='u'){
            contadorA++;
        }
        else {
            consonantes++;
        }
    }
    printf("Las A fueron : %d ", contadorA);
    printf("Las E fueron : %d ", contadorE);
    printf("Las I fueron : %d ", contadorI);
    printf("Las O fueron : %d ", contadorO);
    printf("Las U fueron : %d ", contadorU);
    printf("Las Consonantes fueron : %d ", consonantes);

}