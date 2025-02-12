
//ARBOLES 
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

// Función para imprimir el árbol en preorden (raíz, izquierda, derecha)
void imprimirpreorden(struct nodo *raiz) {
    if (raiz != NULL) {
        printf("Dato: %d\n", raiz->cont);      // Imprimimos el valor del nodo
        imprimirpreorden(raiz->izq);          // Llamada recursiva al subárbol izquierdo
        imprimirpreorden(raiz->der);          // Llamada recursiva al subárbol derecho
    }
}

// Función para contar el número de nodos en el árbol
int contar(struct nodo *ptr) {
    if (ptr == NULL) {
        return 0;  // Si el árbol está vacío, regresamos 0
    } else {
        return 1 + contar(ptr->izq) + contar(ptr->der);  // Contamos la raíz, el subárbol izquierdo y el derecho
    }
}

// Menú para interactuar con el usuario
int menu() {
    int opc;
    printf("\n1. Insertar nodo\n");
    printf("2. Imprimir en preorden\n");
    printf("3. Contar nodos\n");
    printf("4. Salir\n");
    printf("Ingrese su opción: ");
    scanf("%d", &opc);
    return opc;
}

// Función principal
int main() {
    struct nodo *miptrRef = NULL;  // Inicializamos el árbol vacío
    int midato;

    for (;;) {  // Bucle infinito hasta que el usuario elija salir
        switch (menu()) {
        case 1:  // Insertar un nodo
            printf("Ingrese el valor del nodo: ");
            scanf("%d", &midato);
            insertarnodo(&miptrRef, midato);
            break;
        case 2:  // Imprimir el árbol en preorden
            printf("\nÁrbol en preorden:\n");
            imprimirpreorden(miptrRef);
            break;
        case 3:  // Contar los nodos del árbol
            printf("\nNúmero de nodos en el árbol: %d\n", contar(miptrRef));
            break;
        case 4:  // Salir del programa
            printf("Saliendo del programa...\n");
            exit(0);
        default:
            printf("Opción inválida. Intente de nuevo.\n");
        }
    }

    return 0;
}