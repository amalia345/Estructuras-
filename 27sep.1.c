/*Las estructuras de datos se dividen en 2 tipos 
Tipo de dato abstracto (TDA)-SOn todos los siguientes:
1. Lineales: (Pila, La Cola es Circular, estas son Estaticas(Arreglos) aqui entran sólo las Listasy Dinamicas(Malloc) )
2. No lineales (Árboles y Grafos)- Sólo son Dinamicas
Sólo se vana utilizar apuntadores y menus

-SOn otors tipo datos que existen, son los Tipo de dato Conjunto ppero no los vamos a ver en este curso 

Como primer ejemplo de Estructuras vamos a ver PILA(STACK)
-El ultimo elemento es el (top)- que es la cinama d ela pila.
-meter en pila(push)
-sacar de pila (pop)
-esta llena la pila
Nos vamos a preguntar esta llena la pila?
o esta vacia?
Vamos a programas de manera modular? 

*/

//Primer ejemplo pila estatica con enteros y con apuntador al arreglo

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

struct Pila{
    /* data */
    int arreglo[TAM];
    int ptrC;
};
//prototipos
int meterPila (struct Pila*, int);
int sacarDePila (struct Pila*);
int estaVaciaPila (struct Pila*);
int estallenaPila (struct Pila*);
int menu();

int main(){
    struct Pila pila, *miptrP;
    miptrP=&pila;
    int midato;

    //Esto es un ciclo infinito 
    miptrP->ptrC=miptrP->arreglo;
    for (; ;){
        /* code */
        switch (menu()){
        case 1:
            /* code */
            if (estallenaPila(miptrP))
                printf("\nLa pila esta llena!!!");
            else{
                /* code */
                printf("\nIngrese un entero: ");
                scanf("%d", &midato);
            }
            
            break;
        case 2:
            if(estaVaciaPila(miptrP))
            printf("\nEsta vacía la pila");
            else
            printf("\nEl dato recuperado es %d", sacarDePila(miptrP));
            break;
        case 3:
            exit(0);

        }

    }
    
    return 0;
}

 int meterPila(struct Pila *ptrP, int dato){
    ptrP->ptrC=dato;
    ptrP->ptrC++;
    return 0;

}

int sacarDePila(struct Pila *ptrP){
    ptrP->ptrC--;/// se supone que aqui los ptrsP llevan *
    return(ptrP->ptrC);
}

int estaVaciaPila(struct Pila *ptrP){
    if(ptrP->ptrC==ptrP->arreglo)
        return 1;
    else
        return 0;

}

int estallenaPila(struct Pila *ptrP){
    if(ptrP->ptrC== &ptrP->arreglo[TAM])
        return 1;
    else
        return 0;
}
int menu(){
    int opciones;
    printf("\n 1 Para meter datos\n");
    printf("\n 2 Para meter datos\n");
    printf("\n Para salir\n");
    scanf("%d", &opciones);

    return opciones;
}
//hacer tambien la funcion de menu 
//Hacer algo parecido con strct persona 
//Proyecto de primer parcial convertir notacioninfija a postfija


