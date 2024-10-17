

#include <stdio.h>
struct nodo{
    int dato;
    struct nodo *ptrSiguiente, *ptrReturn;
};

int main(){
    /* code */
    int midato;
    struct nodo *miPtrFeferencia;
    miPtrFeferencia=crearNodo(-1000);
    //miPtrFeferencia->ptrSiguiente=NULL;
    //Aqui acaba el nodo de cabecera

    ptrNuevo=(struct nodo*)malloc(sizeof(struct nodo));
    printf("\nIngresa un entero");
    scanf("%d", &ptrNuevo->dato);
    ptrNuevo->ptrSiguiente=NULL;

    ptrReferencia->ptrSiguiente=ptrNuevo//Unimos el nodo referencia al nodo de cabecera 
    ptrNuevo=(struct nodo*)malloc(sizeof(struct nodo));
    scanf("\nIngrese entero");
    scanf("%d", &ptrNuevo->dato);
    ptrNuevo->ptrSiguiente=NULL;

    //1
    ptrNuevo->ptrSiguiente=ptrReferencia->ptrSiguiente;
    //2
    ptrReferencia->ptrSiguiente=ptrNuevo; 

    ptrNuevo=(struct nodo*)malloc(sizeof(struct nodo));
    printf("\nINgrese un entero");
    scanf("%d", &ptrNuevo->dato);
    ptrNuevo->ptrSiguiente=NULL;

    ptrNuevo->ptrSiguiente=ptrReferencia->ptrSiguiente;
    ptrReferencia->ptrSiguiente=ptrNuevo;

}