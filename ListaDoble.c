
//LISTA BOBLE ENLAZADA 
#include <stdio.h> 
#include <stdlib.h> 


typedef struct Nodo {
    int dato;                  // Campo para almacenar un valor entero.
    struct Nodo* siguiente;    // Puntero al siguiente nodo en la lista.
    struct Nodo* anterior;     // Puntero al nodo anterior en la lista.
} Nodo;                     

// Función para agregar un nodo al inicio de la lista
Nodo* agregarInicio(Nodo* cabeza, int dato) {
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo)); // Reservar memoria para un nuevo nodo dinámicamente.
    nuevo->dato = dato;                        // Asignar el valor proporcionado al campo 'dato'.
    nuevo->siguiente = cabeza;                 // El nuevo nodo apunta al nodo actual que es la cabeza.
    nuevo->anterior = NULL;                

    if (cabeza != NULL) {                    
        cabeza->anterior = nuevo;             
    }
    return nuevo;                             
}

// Función para imprimir la lista hacia adelante
void imprimirLista(Nodo* cabeza) {
    Nodo* actual = cabeza;                    
    while (actual != NULL) {                 
        printf("%d <-> ", actual->dato);       
        actual = actual->siguiente;           
    }
    printf("NULL\n");                        
}


void imprimirListaReversa(Nodo* cabeza) {
    if (cabeza == NULL) {            
        printf("NULL\n");
        return;
    }

    // Moverse al final de la lista
    Nodo* actual = cabeza;
    while (actual->siguiente != NULL) {        // Avanzar hasta el último nodo.
        actual = actual->siguiente;
    }

    // Imprimir en sentido inverso
    while (actual != NULL) {                   // Recorrer hacia atrás.
        printf("%d <-> ", actual->dato);       // Imprimir el valor actual.
        actual = actual->anterior;            // Moverse al nodo anterior.
    }
    printf("NULL\n");                          // Indicar el final de la lista inversa.
}

int main() {
    Nodo* lista = NULL;  // Inicialmente, la lista está vacía (cabeza apunta a NULL).

    // Agregar nodos al inicio de la lista
    lista = agregarInicio(lista, 10);  // Agregar un nodo con el valor 10.
    lista = agregarInicio(lista, 20);  // Agregar un nodo con el valor 20.
    lista = agregarInicio(lista, 30);  // Agregar un nodo con el valor 30.
    lista = agregarInicio(lista, 40);  // Agregar un nodo con el valor 40.
    lista = agregarInicio(lista, 50);  // Agregar un nodo con el valor 50.

    // Imprimir la lista hacia adelante
    printf("Lista doblemente enlazada (hacia adelante):\n");
    imprimirLista(lista);

    // Imprimir la lista hacia atrás
    printf("Lista doblemente enlazada (hacia atrás):\n");
    imprimirListaReversa(lista);

    return 0;  // El programa termina sin liberar memoria.
}