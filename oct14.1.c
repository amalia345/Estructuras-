//Entender cual es el camino de esta funcion y si hay otra manera más sencilla y menos revuelta que esta  
#include <stdio.h>
struct nodo{
    int dato;
    struct nodo *ptrSiguiente;
};

int main(){
    /* code */
    struct nodo *ptrReferencia,*ptrNuevo, *ptrRecorrer, *ptrGarbage;
    //ahora creamos el NODO de cabecera
    ptrReferencia=(struct nodo*)malloc(sizeof(struct nodo));
    ptrReferencia->dato=-1000;
    ptrReferencia->ptrSiguiente=NULL;
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

    ptrRecorrer=ptrReferencia->ptrSiguiente;
    while (ptrRecorrer!=NULL){
        printf("%D",ptrRecorrer->dato);
        ptrRecorrer=(ptrReferencia->ptrSiguiente);
        /* code */
    }
    ptrGarbage=ptrReferencia->ptrSiguiente;
    ptrReferencia->ptrSiguiente=ptrGarbage->ptrSiguiente;
    printf("\t Dato referenciado en %d", ptrGarbage->dato);
    f(ptrGarbage);
    
        return 0;
}
