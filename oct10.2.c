// Pila LIFO -  
//PILA- Last in, fist out
//cola -FIFO-First in, fist out 



//Esta es una cola circular, lo que significa que con los arreglos se van a reutilizar las posiciones de la memoria
#include <stdio.h>
#include <stdlib.h> // For exit()
#define TAM 4

struct Cola {
    int arreglo[TAM];
    int *punteroInsercion;
    int *punteroExtraccion;
    int contador; // Counter to track the number of elements
};

int insertarEnCola(struct Cola*, int);
int extraerDeCola(struct Cola*);
int estaVaciaLaCola(struct Cola*);
int estaLlenaLaCola(struct Cola*);
int resetearCola(struct Cola*);
int menu();
void imprimirCola(struct Cola*);

int main() {
    struct Cola cola, *punteroCola;//cola es uan cola pequeña que acabo de crear
    int dato;//almacenar el dato actual
    punteroCola = &cola;//apunta al puntero de colita 
    punteroCola->punteroInsercion = punteroCola->arreglo;//inicializamos el puntero de insercion que apuntaal puntero actual

    punteroCola->punteroExtraccion = punteroCola->arreglo;//lo mismode arriva
    punteroCola->contador = 0;

    // Initialize the array
    for (int i = 0; i < TAM; i++) {//llena el arreglo de 0s
        punteroCola->arreglo[i] = 0;
    }

    for (;;) {
        switch (menu()) {
            case 1:
                printf("\nIngrese el dato: ");
                scanf("%d", &dato);
                if (insertarEnCola(punteroCola, dato) == 0) {
                    imprimirCola(punteroCola);
                }
                break;

            case 2:
                dato = extraerDeCola(punteroCola);
                if (dato != -1) { //siempre i cuando el numero nos ea negativo
                    printf("\nEl dato recuperado es %d\n", dato);
                    imprimirCola(punteroCola);
                }
                break;

            case 3://Borras todo lo escrito anteriormente
                resetearCola(punteroCola);
                printf("\nCola reseteada\n");
                imprimirCola(punteroCola);
                break;

            case 4:
                exit(0);//mata el programa entero

            default:
                printf("\nOpción inválida. Intente de nuevo.\n");
        }
    }

    return 0;
}

int insertarEnCola(struct Cola *ptrCola, int dato) {
    if (estaLlenaLaCola(ptrCola)) {
        printf("\nLa cola está llena\n");
        return -1;
    }
    *ptrCola->punteroInsercion = dato;//metes el dato en el lugar que va con el apuntador
    ptrCola->punteroInsercion++;//aumentas el apuntador de insertar y apuntas al siguiente
    if (ptrCola->punteroInsercion == ptrCola->arreglo + TAM) {//si el lugar actual es el inicio del arreglo + el tamañonenn decir nel ultimo lugar
        ptrCola->punteroInsercion = ptrCola->arreglo; //entonces lo reiniccias           ell punntero
    }
    ptrCola->contador++;
    return 0;
}

int extraerDeCola(struct Cola *ptrCola) {
    if (estaVaciaLaCola(ptrCola)) {//checamos que la cola noe sta vacía
        printf("\nLa cola está vacía\n");
        return -1;
    }
    int datoExtraido = *ptrCola->punteroExtraccion;
    *ptrCola->punteroExtraccion = 0; // Optional: Clear the extracted value
    ptrCola->punteroExtraccion++;
    if (ptrCola->punteroExtraccion == ptrCola->arreglo + TAM) {
        ptrCola->punteroExtraccion = ptrCola->arreglo; // Wrap around
    }
    ptrCola->contador--;//le quitamos un elemento 
    return datoExtraido;
}

int estaVaciaLaCola(struct Cola *ptrCola) {
    return ptrCola->contador == 0;
}

int estaLlenaLaCola(struct Cola *ptrCola) {
    return ptrCola->contador == TAM;
}

int resetearCola(struct Cola *ptrCola) {
    ptrCola->punteroInsercion = ptrCola->arreglo;
    ptrCola->punteroExtraccion = ptrCola->arreglo;
    ptrCola->contador = 0;
    for (int i = 0; i < TAM; i++) {// a cada elemento del arreglo le pones un 0 
        ptrCola->arreglo[i] = 0;
    }
    return 0;
}

int menu() {
    int opcion;
    printf("\n--- Menú ---\n");
    printf("1. Insertar dato en la cola\n");
    printf("2. Extraer dato de la cola\n");
    printf("3. Resetear la cola\n");
    printf("4. Salir\n");
    printf("Ingrese opción: ");
    scanf("%d", &opcion);
    return opcion;
}

void imprimirCola(struct Cola *ptrCola) {
    printf("\nEstado actual de la cola:\n[");
    for (int i = 0; i < TAM; i++) {
        printf("%d", ptrCola->arreglo[i]);
        if (i < TAM - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    printf("Posición de inserción (punteroInsercion): %ld\n", ptrCola->punteroInsercion - ptrCola->arreglo);
    printf("Posición de extracción (punteroExtraccion): %ld\n", ptrCola->punteroExtraccion - ptrCola->arreglo);
    printf("Número de elementos en la cola (contador): %d\n", ptrCola->contador);
}
