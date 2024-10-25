#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura del nodo
struct nodo {
    int dato;
    struct nodo *punteroSiguiente;
    struct nodo *punteroAnterior;
};

// Prototipos de funciones
struct nodo* crearNodo(int);
int meterNodo(struct nodo*, int);
int imprimir(struct nodo*);
int imprimirEnReversa(struct nodo*);
int menu();

int main() {
    int midato;
    struct nodo *nodoCabeza;//nodo inivial es la cabeza d ela lista
    nodoCabeza = crearNodo(0); // Nodo de referencia

    // Bucle principal
    for (;;) {
        switch (menu()) {
            case 1:
                printf("Ingrese dato: ");
                scanf("%d", &midato);
                meterNodo(nodoCabeza, midato);
                break;

            case 2:
                imprimir(nodoCabeza);
                break;

            case 3:
                imprimirEnReversa(nodoCabeza);
                break;

            case 4:
                exit(0);

            default:
                printf("Opción no válida. Intente nuevamente.\n");
        }
    }

    return 0;
}

// Función para crear un nodo con un valor específico
// Esta función reserva memoria para un nuevo nodo, le asigna un dato
// y pone los punteros a NULL inicialmente
struct nodo* crearNodo(int dato1) {
    struct nodo *nuevoNodo;  // Crear un nuevo puntero de tipo nodo
    nuevoNodo = (struct nodo*)malloc(sizeof(struct nodo));  // Asignar memoria para el nuevo nodo
    nuevoNodo->dato = dato1;  // Asignar el valor al nodo
    nuevoNodo->punteroSiguiente = NULL;  // El puntero al siguiente nodo inicialmente es NULL
    nuevoNodo->punteroAnterior = NULL;  // El puntero al nodo anterior también es NULL
    return nuevoNodo;  // Retornar el nodo recién creado
}

// Función para insertar un nuevo nodo en la lista, siempre al inicio después del nodo de referencia
int meterNodo(struct nodo *nodoReferencia, int dato1) {
    struct nodo *nuevoNodo;
    nuevoNodo = crearNodo(dato1);  // Crear un nuevo nodo con el dato dado

    // Si no hay ningún nodo en la lista (solo está el nodo de referencia)
    if (nodoReferencia->punteroSiguiente == NULL) {  
        nodoReferencia->punteroSiguiente = nuevoNodo;  // Conectar el nodo de referencia con el nuevo nodo
        nuevoNodo->punteroAnterior = nodoReferencia;  // Conectar el nuevo nodo con el nodo de referencia hacia atrás
    } else {  // Si ya hay nodos en la lista, se inserta el nuevo nodo al principio
        nuevoNodo->punteroSiguiente = nodoReferencia->punteroSiguiente;  // Conectar el nuevo nodo al nodo que estaba al principio
        nodoReferencia->punteroSiguiente->punteroAnterior = nuevoNodo;  // Actualizar el puntero hacia atrás del nodo siguiente al nuevo nodo
        nuevoNodo->punteroAnterior = nodoReferencia;  // Conectar el nuevo nodo con el nodo de referencia hacia atrás
        nodoReferencia->punteroSiguiente = nuevoNodo;  // Conectar el nodo de referencia con el nuevo nodo hacia adelante
    }
    return 0;
}

// Función para imprimir la lista desde el principio hacia el final
// Recorre todos los nodos comenzando desde el primer nodo (después del nodo de referencia)
int imprimir(struct nodo *nodoReferencia) {
    struct nodo *nodoActual = nodoReferencia->punteroSiguiente;  // Empezar desde el primer nodo
    printf("Contenido de la lista hacia adelante:\n");
    
    // Recorrer la lista mientras existan nodos
    while (nodoActual != NULL) {
        printf("%d\t", nodoActual->dato);  // Imprimir el dato del nodo actual
        nodoActual = nodoActual->punteroSiguiente;  // Avanzar al siguiente nodo
    }
    printf("\n");
    return 0;
}

// Función para imprimir la lista desde el final hacia el principio
// Recorre la lista hasta el último nodo, y luego imprime en reversa
int imprimirEnReversa(struct nodo *nodoReferencia) {
    struct nodo *nodoActual = nodoReferencia->punteroSiguiente;  // Comenzar desde el primer nodo

    // Si no hay nodos en la lista, mostrar un mensaje
    if (!nodoActual) {
        printf("La lista está vacía.\n");
        return 0;
    }

    // Ir al último nodo de la lista
    while (nodoActual->punteroSiguiente != NULL)
        nodoActual = nodoActual->punteroSiguiente;

    // Imprimir los nodos desde el último hasta el nodo de referencia
    printf("Contenido de la lista hacia atrás:\n");
    while (nodoActual != nodoReferencia) {
        printf("%d\t", nodoActual->dato);  // Imprimir el dato del nodo actual
        nodoActual = nodoActual->punteroAnterior;  // Retroceder al nodo anterior
    }
    printf("\n");
    return 0;
}

// Función que muestra un menú al usuario para seleccionar la operación deseada
int menu() {
    int opc;
    printf("\n1. Meter nodo\n");
    printf("2. Imprimir contenido hacia adelante\n");
    printf("3. Imprimir contenido en reversa\n");
    printf("4. Salir\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opc);  // Leer la opción seleccionada por el usuario
    return opc;  // Retornar la opción
}