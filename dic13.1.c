#include <stdio.h>
#include <stdlib.h>

// Definimos la estructura de un nodo del árbol
struct nodo {
    int cont;//Esto es un valor 
    struct nodo *izq;  // Puntero al hijo izquierdo
    struct nodo *der;  // Puntero al hijo derecho
};

// Función para crear un nuevo nodo
struct nodo *crearnodo(int datoent) {
    struct nodo *new = (struct nodo *)malloc(sizeof(struct nodo)); // Reservamos memoria para el nodo
    new->cont = datoent;  // Asignamos el valor al nodo
    new->izq = NULL;      // Inicializamos el hijo izquierdo como NULL
    new->der = NULL;      // Inicializamos el hijo derecho como NULL
    return new;           // Devolvemos el nodo creado
}

// Función para insertar un nodo en el árbol
void insertarnodo(struct nodo **raiz, int datoent) {
    if (*raiz == NULL) {  // Si el árbol está vacío, creamos la raíz
        *raiz = crearnodo(datoent);
    } else if ((*raiz)->cont > datoent) {  // Si el valor es menor, va al subárbol izquierdo
        insertarnodo(&((*raiz)->izq), datoent);
    } else {  // Si el valor es mayor o igual, va al subárbol derecho
        insertarnodo(&((*raiz)->der), datoent);
    }
}