//LISTA SENCILLA
//Declaración de librerias
#include <stdio.h>//ENtradas y salidas inputy y output
#include <stdlib.h>//Asignacion de memoria y limpieza de punteros

// Definimos el nodo
typedef struct Nodo {//Creamos una estructura con Nodo 
    int dato;//Dato qu ealmacenamos
    struct Nodo* siguiente;//Puntero que apunta al siguiente nodo
} Nodo;

//Esta función agrega un nodo al inicio de la lista 
Nodo* agregarInicio(Nodo* cabeza, int dato) { 
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo)); //Rcervamos memoria para el nuevo nodo 
    nuevo->dato = dato; //Le metemos un dato al nodo 
    nuevo->siguiente = cabeza; //Apuntas al siguiente nodo 
    return nuevo; 
    }

void imprimirLista(Nodo* cabeza) {//Funcion para imprimir la lista 
    Nodo* actual = cabeza;//Comenzamos con la cabeza 
    while (actual != NULL) {//Para imprimimir mientras exista un elemento, cuando llegue a null ppra 
        printf("%d -> ", actual->dato);//Mostrar la salida del valor actual del nodo

        actual = actual->siguiente;//Avanzamos al siguiente nodo 
    }
    printf("NULL\n");//Acabamos
}

int main() {
    Nodo* lista = NULL;//Comenzamos vacios

    lista = agregarInicio(lista, 10);
    lista = agregarInicio(lista, 20);
    lista = agregarInicio(lista, 30);
    lista = agregarInicio(lista, 40);
    lista = agregarInicio(lista, 50);

printf("Lista enlazada simple:\n");
    imprimirLista(lista);//Llamamos a la funcion imprimir lista 

    return 0;
}