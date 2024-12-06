#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int dato;
    struct nodo *ptrSiguiente;
    struct nodo *ptrAnterior;
};

struct nodo* crearNodo(int dato);
int meterNodoIzquierda(struct nodo **frente, struct nodo **final, int dato);
int sacarNodoDerecha(struct nodo **frente, struct nodo **final);
int imprimirCola(struct nodo **frente);
int menu();

int main() {
    struct nodo *frente = NULL;
    struct nodo *final = NULL;
    int dato;

    for (;;) {
        switch (menu()) {
            case 1:
                printf("Ingrese el dato: ");
                scanf("%d", &dato);
                meterNodoIzquierda(&frente, &final, dato);
                break;
            case 2:
                sacarNodoDerecha(&frente, &final);
                break;
            case 3:
                imprimirCola(&frente);
                break;
            case 4:
                exit(0);
        }
    }
    return 0;
}

struct nodo* crearNodo(int dato) {
    struct nodo *nuevoNodo = (struct nodo*)malloc(sizeof(struct nodo));
    if (!nuevoNodo) {
        printf("Error al asignar memoria.\n");
        exit(-1);
    }
    nuevoNodo->dato = dato;
    nuevoNodo->ptrSiguiente = NULL;
    nuevoNodo->ptrAnterior = NULL;
    return nuevoNodo;
}

int meterNodoIzquierda(struct nodo **frente, struct nodo **final, int dato) {
    struct nodo *nuevoNodo = crearNodo(dato);
    if (*frente == NULL) {
        // Si la cola está vacía, frente y final apuntan al nuevo nodo
        *frente = nuevoNodo;
        *final = nuevoNodo;
    } else {
        // Insertamos el nodo al principio (lado izquierdo)
        nuevoNodo->ptrSiguiente = *frente;
        (*frente)->ptrAnterior = nuevoNodo;
        *frente = nuevoNodo;
    }
    return 0;
}

int sacarNodoDerecha(struct nodo **frente, struct nodo **final) {
    if (*final == NULL) {
        printf("La cola está vacía.\n");
        return -1;
    }

    struct nodo *nodoEliminar = *final;
    int dato = nodoEliminar->dato;

    if (*frente == *final) {
        // Solo hay un nodo en la cola
        *frente = NULL;
        *final = NULL;
    } else {
        // Eliminar desde el final (lado derecho)
        *final = nodoEliminar->ptrAnterior;
        (*final)->ptrSiguiente = NULL;
    }

    printf("El dato eliminado es: %d\n", dato);
    free(nodoEliminar);
    return 0;
}

int imprimirCola(struct nodo **frente) {
    struct nodo *actual = *frente;
    if (actual == NULL) {
        printf("La cola está vacía.\n");
        return -1;
    }
    printf("Contenido de la cola: ");
    while (actual != NULL) {
        printf("%d ", actual->dato);
        actual = actual->ptrSiguiente;
    }
    printf("\n");
    return 0;
}

int menu() {
    int opcion;
    printf("\n--- Menu ---\n");
    printf("1. Insertar nodo (lado izquierdo)\n");
    printf("2. Eliminar nodo (lado derecho)\n");
    printf("3. Imprimir cola\n");
    printf("4. Salir\n");
    printf("Elija una opción: ");
    scanf("%d", &opcion);
    return opcion;
}
