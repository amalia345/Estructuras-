//COLA DINAMICA CON UN NODODE CABECERA USANDO UN DATO ENTERO 
#include <stdio.h>
#include <stdlib.h>

// Definición del nodo
typedef struct Nodo {
    int dato;              // Dato que almacenará el nodo
    struct Nodo* siguiente; // Puntero al siguiente nodo
} Nodo;

// Definición de la cola con nodo de cabecera
typedef struct {
    Nodo* cabecera; // Nodo de cabecera (no almacena datos útiles)
    Nodo* final;    // Puntero al último nodo (final de la cola)
} Cola;

// Función para crear una cola vacía
Cola* crearCola() {
    Cola* nuevaCola = (Cola*)malloc(sizeof(Cola));
    Nodo* cabecera = (Nodo*)malloc(sizeof(Nodo));
    
    cabecera->siguiente = NULL; // La cabecera apunta a NULL al inicio
    nuevaCola->cabecera = cabecera;
    nuevaCola->final = cabecera; // Al principio, el final es la cabecera
    
    return nuevaCola;
}

// Función para encolar (agregar un nuevo elemento al final)
void encolar(Cola* cola, int valor) {
    Nodo* nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = NULL;  // El nuevo nodo será el último, no tiene siguiente
    
    cola->final->siguiente = nuevoNodo; // El último nodo actual apunta al nuevo nodo
    cola->final = nuevoNodo; // Actualizamos el puntero final
}

// Función para desencolar (eliminar el primer elemento)
int desencolar(Cola* cola) {
    if (cola->cabecera->siguiente == NULL) {
        printf("La cola está vacía.\n");
        return -1; // Retorna un valor de error si está vacía
    }

    Nodo* temp = cola->cabecera->siguiente; // El nodo a eliminar
    int valor = temp->dato; // Guardamos el valor del nodo a eliminar

    cola->cabecera->siguiente = temp->siguiente; // Actualizamos la cabecera para apuntar al siguiente nodo

    if (cola->cabecera->siguiente == NULL) { // Si la cola quedó vacía
        cola->final = cola->cabecera; // El final vuelve a apuntar a la cabecera
    }

    free(temp); // Liberamos la memoria del nodo desencolado
    return valor; // Retornamos el valor desencolado
}

// Función para verificar si la cola está vacía
int estaVacia(Cola* cola) {
    return (cola->cabecera->siguiente == NULL);
}

// Función para liberar la memoria de toda la cola
void liberarCola(Cola* cola) {
    while (!estaVacia(cola)) {
        desencolar(cola);
    }
    free(cola->cabecera); // Liberamos la cabecera
    free(cola);           // Liberamos la estructura Cola
}

int main() {
    // Crear una cola
    Cola* cola = crearCola();
    
    // Encolar algunos valores
    encolar(cola, 1000);
    encolar(cola, 2000);
    encolar(cola, 3000);
    
    // Desencolar y mostrar valores
    printf("Desencolado: %d\n", desencolar(cola));
    printf("Desencolado: %d\n", desencolar(cola));
    
    // Verificar si la cola está vacía
    if (!estaVacia(cola)) {
        printf("Desencolado: %d\n", desencolar(cola));
    } else {
        printf("La cola está vacía.\n");
    }

    // Liberar la memoria utilizada por la cola
    liberarCola(cola);

    return 0;
}
