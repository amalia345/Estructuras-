#include <stdio.h>
#include <stdlib.h>

struct nodo {
    int contenido;
    struct nodo *ptrIzq;
    struct nodo *ptrDer;
};

struct nodo *crearNodo(int datoEnt) {
    struct nodo *ptrNuevo = (struct nodo*) malloc(sizeof(struct nodo));
    ptrNuevo->contenido = datoEnt;
    ptrNuevo->ptrIzq = NULL;
    ptrNuevo->ptrDer = NULL;
    return ptrNuevo;
}

void insertarNodo(struct nodo **ptrRaiz, int datoEnt) {
    if (*ptrRaiz == NULL) {
        *ptrRaiz = crearNodo(datoEnt);
    } else if (((*ptrRaiz)->contenido) > datoEnt) {
        insertarNodo(&((*ptrRaiz)->ptrIzq), datoEnt);
    } else {
        insertarNodo(&((*ptrRaiz)->ptrDer), datoEnt);
    }
}

void imprimirPreorden(struct nodo *ptrRaiz) {
    if (ptrRaiz != NULL) {
        printf("Dato: %d\n", ptrRaiz->contenido);
        imprimirPreorden(ptrRaiz->ptrIzq);
        imprimirPreorden(ptrRaiz->ptrDer);
    }
}

// Función para encontrar el nodo con el menor valor (para reemplazar en caso de eliminación)
struct nodo* encontrarMinimo(struct nodo* nodo) {
    while (nodo->ptrIzq != NULL) {
        nodo = nodo->ptrIzq;
    }
    return nodo;
}

// Función para eliminar un nodo del árbol binario
struct nodo* eliminarNodo(struct nodo* ptrRaiz, int valor) {
    if (ptrRaiz == NULL) {
        printf("Nodo con valor %d no encontrado.\n", valor);
        return ptrRaiz;
    }

    if (valor < ptrRaiz->contenido) {
        ptrRaiz->ptrIzq = eliminarNodo(ptrRaiz->ptrIzq, valor);
    } else if (valor > ptrRaiz->contenido) {
        ptrRaiz->ptrDer = eliminarNodo(ptrRaiz->ptrDer, valor);
    } else {
        // Caso 1: Nodo sin hijos
        if (ptrRaiz->ptrIzq == NULL && ptrRaiz->ptrDer == NULL) {
            free(ptrRaiz);
            printf("Nodo con valor %d eliminado.\n", valor);
            return NULL;
        }
        // Caso 2: Nodo con un solo hijo
        if (ptrRaiz->ptrIzq == NULL) {
            struct nodo* temp = ptrRaiz->ptrDer;
            free(ptrRaiz);
            printf("Nodo con valor %d eliminado.\n", valor);
            return temp;
        } else if (ptrRaiz->ptrDer == NULL) {
            struct nodo* temp = ptrRaiz->ptrIzq;
            free(ptrRaiz);
            printf("Nodo con valor %d eliminado.\n", valor);
            return temp;
        }
        // Caso 3: Nodo con dos hijos
        struct nodo* temp = encontrarMinimo(ptrRaiz->ptrDer);
        ptrRaiz->contenido = temp->contenido;
        ptrRaiz->ptrDer = eliminarNodo(ptrRaiz->ptrDer, temp->contenido);
    }
    return ptrRaiz;
}

int menu() {
    int opc;
    printf("1 Para meter dato\n");
    printf("2 Imprimir contenido preorden\n");
    printf("3 Eliminar un nodo\n");
    printf("4 Para salir\n");
    scanf("%d", &opc);

    return opc;
}

int main() {
    struct nodo *raiz = NULL; // Inicializa el árbol vacío
    int opcion, dato;

    do {
        opcion = menu(); // Llama al menú
        switch (opcion) {
            case 1: // Insertar dato
                printf("Introduce un dato: ");
                scanf("%d", &dato);
                insertarNodo(&raiz, dato);
                break;
            case 2: // Imprimir en preorden
                imprimirPreorden(raiz);
                break;
            case 3: // Eliminar un nodo
                printf("Introduce el dato a eliminar: ");
                scanf("%d", &dato);
                raiz = eliminarNodo(raiz, dato);
                break;
            case 4: // Salir
                printf("Saliendo del programa.\n");
                break;
            default:
                printf("Opción no válida.\n");
        }
    } while (opcion != 4);

    return 0;
}
