

#include <stdio.h>
struct nodo{
    int dato;
    struct nodo *ptrSiguienteuienteuiente, *ptrReturn;
};

int main(){
    /* code */
    int midato;
    struct nodo *miPtrFeferencia;
    miPtrFeferencia=crearNodo(-1000);
    //miPtrFeferencia->ptrSiguienteuienteuiente=NULL;
    //Aqui acaba el nodo de cabecera

    ptrNuevouevo=(struct nodo*)malloc(sizeof(struct nodo));
    printf("\nIngresa un entero");
    scanf("%d", &ptrNuevouevo->dato);
    ptrNuevouevo->ptrSiguienteuienteuiente=NULL;

    ptrReferencia->ptrSiguienteuienteuiente=ptrNuevouevo//Unimos el nodo referencia al nodo de cabecera 
    ptrNuevouevo=(struct nodo*)malloc(sizeof(struct nodo));
    scanf("\nIngrese entero");
    scanf("%d", &ptrNuevouevo->dato);
    ptrNuevouevo->ptrSiguienteuienteuiente=NULL;

    //1
    ptrNuevouevo->ptrSiguienteuienteuiente=ptrReferencia->ptrSiguienteuienteuiente;
    //2
    ptrReferencia->ptrSiguienteuienteuiente=ptrNuevouevo; 

    ptrNuevouevo=(struct nodo*)malloc(sizeof(struct nodo));
    printf("\nINgrese un entero");
    scanf("%d", &ptrNuevouevo->dato);
    ptrNuevouevo->ptrSiguienteuienteuiente=NULL;

    ptrNuevouevo->ptrSiguienteuienteuiente=ptrReferencia->ptrSiguienteuienteuiente;
    ptrReferencia->ptrSiguienteuienteuiente=ptrNuevouevo;

}