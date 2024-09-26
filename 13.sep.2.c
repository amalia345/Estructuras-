//Arreglo manejado por un indice, encapsulado y manipulado por un puntero 
//a traves de una instancia de estructura 


#include <stdio.h>

//De tarea Maeterse en JAVA e investigar que es el Index Of y CharAt

//Caso 1 - Instancia con indice, con puntero, puntero de estructura conindice y puntero de estructura de arreglo

//Paso no 1- Definición de la estructura
struct Datos{
    int arreglo[5];
    int i;
};
int main(int argc, char const *argv[]){
    struct Datos datos; //Declaración de la estructura
    //Rellenar el arreglo usando un ciclo for 
    for(datos.i=0; datos.i<5; datos.i++){
        printf("Introduce un valor para arreglo[%d]:", datos.i);
        scanf("%d", &datos.arreglo[datos.i]);//Accder a los datos usando 'datos.i'
    }

    //Ahora imprimimos los valores ingresados 
    printf("Los valores del arreglo son:\n");
    for(datos.i=0; datos.i< 5; datos.i++){
        printf("En la celda %d esta el entero %den la dirección %lu\n", datos.i, datos.arreglo[datos.i],(long int)&datos.arreglo[datos.i]);

    }
    
    return 0;
}



