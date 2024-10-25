//Pila dinámica sin nodo de cabecera (para enteros)

#include <stdio.h>
#include <stdlib.h>

struct nodo{
    struct nodo *ptrSiguiente;
    int dato;
};
struct nodo* crearNodo (int);
int meterNodo (struct nodo**, int);
int imprCont(struct nodo**);
int menu();

int main (){
    struct nodo *miPunteroReferencia1, **miPunteroReferencia2;
    miPunteroReferencia1=NULL;
    miPunteroReferencia2=&miPunteroReferencia1;
    int midato;


    for (;;){
        switch (menu()){
        case 1:
           printf ("Ingrese dato\n");
           scanf ("%d",&midato);
           meterNodo (miPunteroReferencia2,midato);

        break;

        case 2:
            imprCont(miPunteroReferencia2);

        break;

        case 3:
            elimNodo(miPunteroReferencia2);
        break;


        case 4:
            exit (0);
        };
    }
    return 0;
}


struct nodo* crearNodo (int dato1){
    struct nodo *ptrNuevo;
    ptrNuevo=(struct nodo*)malloc(sizeof(struct nodo));
    ptrNuevo->dato=dato1;
    ptrNuevo->ptrSiguiente=NULL;

    return ptrNuevo;
};

int meterNodo (struct nodo **ptrRef2, int dato1){
    struct nodo *ptrNew;
    ptrNew = crearNodo (dato1);
    if ((*ptrRef2)==NULL)
        (*ptrRef2)=ptrNew;
    else{
        ptrNew->ptrSiguiente=*ptrRef2;
        *ptrRef2=ptrNew;
    }
    return 0;
}

int imprCont(struct nodo **ptrRef2){
    struct nodo *ptrRecoger;
    ptrRecoger=*ptrRef2;
    while (ptrRecoger!=NULL){
        printf ("%d\t", ptrRecoger->dato);
        ptrRecoger=ptrRecoger->ptrSiguiente;
    }
return 0;
}

int elimNodo (struct nodo **ptrRef2){
    struct nodo *ptrBas;
    if ((*ptrRef2)==NULL){
        printf ("La pila esta vacía");
        return -1;
    }
    if ((*ptrRef2)->ptrSiguiente==NULL){
        ptrBas=(*ptrRef2);
        (*ptrRef2)=NULL;
        printf ("El dato recuperado es %d\n", ptrBas->dato);
        free(ptrBas);
    }
    else {
        ptrBas=*ptrRef2;
        *ptrRef2=ptrBas->ptrSiguiente;
        printf ("El dato recuperado es %d\n", ptrBas->dato);
        free(ptrBas);
    }
    return 0;
}

int menu(){
        int opc;
        printf ("\n 1 Para meter nodo\n");
        printf ("\n 2 Imprimir contenido\n");
        printf ("\n 3 Para eliminar nodo\n");
        printf ("\n 4 Para salir\n");
        scanf ("%d", &opc);

        return opc;

    }