//Variable : Es una o maas localidades de memoria o bites que tiene un nombre.
// Necesitamos declarar la varible significa informarle al sistem de la existencia 

//int var1; tipo de dato y el nombre 
//Variable apuntador: Es una variable que almacena la direccion de memoria de otra variable, tiene que ser de mismo tipo 
// int *ptv tipo de variable y nombre 
//La direccion de memoria es un entero largo  no signado 
//&-- Es un operador de direccion  
//*-- Operador de direcci
//ALgoritmo 
//Programación Orientada a objetos : Se utilizaa Encapsulacion 
// c: absorcion y abstraccion 
/*int var1, var2; 
int *ptr;
var=5; //Accinación de valor
ptr=&var1; //Obtiene la dereccion de memmoria 
var2=*ptr;*/
//SIstema operativo: Administrador de recursos de la maquina y maneja archivos, 
//procesos, memoria,y manejo de entrada salida y la comunicacion entre procesos.


#include <stdio.h>
//INDICES 

/*Dado un arreglo de 5 celdad de entros, ingresar desde el teclado los datos , 
luego imprimirlo con el número de celda y su direccion.*/
int main()
{
    int arreglo[5];
    int i ;
    for ( i = 0; i < 25; i++){
        /* code */
        printf("Ingreses un entero:");
        scanf("%d", &arreglo[i]);

    }
    for ( i = 0; i < 5; i++)
    {   
        printf("In en la celda %d está el valor %d em la direccion %p", i, arreglo[i], &arreglo[i]);
        /* %lu LOng inside, con linux funcion %p */
    }
    
    
    return 0;
}

