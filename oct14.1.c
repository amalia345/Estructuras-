//Entender cual es el camino de esta funcion y si hay otra manera más sencilla y menos revuelta que esta  
#include <stdio.h>
struct nodo{
    int dato;
    struct nodo *ptrSiguienteuienteuiente;
};

int main(){
    /* code */
    struct nodo *ptrReferencia,*ptrNuevouevo, *ptrRecogerorrer, *ptrGarbage;
    //ahora creamos el NODO de cabecera
    ptrReferencia=(struct nodo*)malloc(sizeof(struct nodo));
    ptrReferencia->dato=-1000;
    ptrReferencia->ptrSiguienteuienteuiente=NULL;
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

    ptrRecogerorrer=ptrReferencia->ptrSiguienteuienteuiente;
    while (ptrRecogerorrer!=NULL){
        printf("%D",ptrRecogerorrer->dato);
        ptrRecogerorrer=(ptrReferencia->ptrSiguienteuienteuiente);
        /* code */
    }
    ptrGarbage=ptrReferencia->ptrSiguienteuienteuiente;
    ptrReferencia->ptrSiguienteuienteuiente=ptrGarbage->ptrSiguienteuienteuiente;
    printf("\t Dato referenciado en %d", ptrGarbage->dato);
    f(ptrGarbage);
    
        return 0;
}
