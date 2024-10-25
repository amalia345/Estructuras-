#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int dato;
    struct nodo *ptrSiguiente;
    struct nodo *ptrAnterior;
};
//prototipos de funciones 
struct nodo* crearNodo (int);//declaracion de una funcion que crea un nuevo nodo en la memoria
int meterNodo (struct nodo*, int);
int imprCont(struct nodo*);
int imprContReversa(struct nodo*);
int elimNodo (struct nodo*);
int menu();


int main(){
    int midato;
    struct nodo *miPunteroReferencia;
    miPunteroReferencia =crearNodo(-1000);// nodo falso para que el puntero no comience vacio 

    for (;;){
        switch (menu()){
        case 1:
           printf ("Ingrese dato\n");
           scanf ("%d",&midato);
           meterNodo (miPunteroReferencia,midato);
        break;

        case 2:
            imprCont(miPunteroReferencia);
        break;

        case 3:
            imprContReversa(miPunteroReferencia);
        break;

        case 4:
            exit (0);
        }
    }
    return 0;
}


struct nodo* crearNodo (int datoDeEntrada){//un nod es una cajita de 3 elementos, anterior, dato y siguiente
    struct nodo *ptrNuevo;
    ptrNuevo=(struct nodo*)malloc(sizeof(struct nodo));//malloc asigna memoria
    ptrNuevo->dato=datoDeEntrada;
    ptrNuevo->ptrSiguiente=NULL;//NULL significa que esta vacio
    ptrNuevo->ptrAnterior=NULL;
    return ptrNuevo;
};

int meterNodo (struct nodo *ptrRef, int datoDeEntrada){
    struct nodo *ptrNew;
    ptrNew = crearNodo (datoDeEntrada);
    if (ptrRef->ptrSiguiente== NULL && ptrRef->ptrAnterior==NULL){//si ambos punteros son nulos es el primer elemento
        ptrRef->ptrSiguiente=ptrNew;
        ptrNew->ptrAnterior=ptrRef;
    }
    else{
        ptrNew->ptrSiguiente=ptrRef->ptrSiguiente;
        ptrRef->ptrSiguiente->ptrAnterior=ptrNew;
        ptrNew->ptrAnterior=ptrRef;
        ptrRef->ptrSiguiente=ptrNew;
    }
    return 0;
}

int imprCont(struct nodo *ptrRef){
    struct nodo *ptrRecoger;
    ptrRecoger=ptrRef->ptrSiguiente;
    while (ptrRecoger!=NULL){
        printf ("%d\t", ptrRecoger->dato);
        ptrRecoger=ptrRecoger->ptrSiguiente;
    }
return 0;
}

int imprContReversa(struct nodo *ptrRef){
    struct nodo *ptrRecoger;
    ptrRecoger=ptrRef->ptrSiguiente;
    while (ptrRecoger->ptrSiguiente!=NULL)
        ptrRecoger=ptrRecoger->ptrSiguiente;
    while (ptrRecoger!=ptrRef){
        printf ("%d\t", ptrRecoger->dato);
        ptrRecoger=ptrRecoger->ptrAnterior;
    }
    return 0;
    }



int menu(){
        int opc;
        printf ("\n 1 Para meter nodo\n");
        printf ("\n 2 Imprimir contenido \n");
        printf ("\n 3 Para imprimir contenido atras hacia adelante\n");
        printf ("\n 4 Para salir\n");
        scanf ("%d", &opc);

        return opc;
    }
