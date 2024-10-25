

#include <stdio.h>
struct nodo{
    int dato;
    struct nodo *ptrSiguienteuiente, *ptrReturn;
};

int main(){
    /* code */
    int midato;
    struct nodo *miPtrFeferencia;
    miPtrFeferencia=crearNodo(-1000);
    //miPtrFeferencia->ptrSiguienteuiente=NULL;
    //Aqui acaba el nodo de cabecera

    ptrNuevouevo=(struct nodo*)malloc(sizeof(struct nodo));
    printf("\nIngresa un entero");
    scanf("%d", &ptrNuevouevo->dato);
    ptrNuevouevo->ptrSiguienteuiente=NULL;

    ptrReferencia->ptrSiguienteuiente=ptrNuevouevo//Unimos el nodo referencia al nodo de cabecera 
    ptrNuevouevo=(struct nodo*)malloc(sizeof(struct nodo));
    scanf("\nIngrese entero");
    scanf("%d", &ptrNuevouevo->dato);
    ptrNuevouevo->ptrSiguienteuiente=NULL;

    //1
    ptrNuevouevo->ptrSiguienteuiente=ptrReferencia->ptrSiguienteuiente;
    //2
    ptrReferencia->ptrSiguienteuiente=ptrNuevouevo; 

    ptrNuevouevo=(struct nodo*)malloc(sizeof(struct nodo));
    printf("\nINgrese un entero");
    scanf("%d", &ptrNuevouevo->dato);
    ptrNuevouevo->ptrSiguienteuiente=NULL;

    ptrNuevouevo->ptrSiguienteuiente=ptrReferencia->ptrSiguienteuiente;
    ptrReferencia->ptrSiguienteuiente=ptrNuevouevo;

}