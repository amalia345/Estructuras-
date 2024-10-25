//Entender cual es el camino de esta funcion y si hay otra manera más sencilla y menos revuelta que esta  
#include <stdio.h>
struct nodo{
    int dato;
    struct nodo *ptrSiguienteuiente;
};

int main(){
    /* code */
    struct nodo *ptrReferencia,*ptrNuevouevo, *ptrRecogerorrer, *ptrGarbage;
    //ahora creamos el NODO de cabecera
    ptrReferencia=(struct nodo*)malloc(sizeof(struct nodo));
    ptrReferencia->dato=-1000;
    ptrReferencia->ptrSiguienteuiente=NULL;
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

    ptrRecogerorrer=ptrReferencia->ptrSiguienteuiente;
    while (ptrRecogerorrer!=NULL){
        printf("%D",ptrRecogerorrer->dato);
        ptrRecogerorrer=(ptrReferencia->ptrSiguienteuiente);
        /* code */
    }
    ptrGarbage=ptrReferencia->ptrSiguienteuiente;
    ptrReferencia->ptrSiguienteuiente=ptrGarbage->ptrSiguienteuiente;
    printf("\t Dato referenciado en %d", ptrGarbage->dato);
    f(ptrGarbage);
    
        return 0;
}
