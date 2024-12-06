

// Con nodo auxiliar
//Funciones

#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int dato;
    struct nodo *ptrSiguienteuiente;
};

struct nodo* crearNodo (int);
int meterNodo (struct nodo*, int);
int imprCont(struct nodo*);
int elimNodo (struct nodo*);
int menu();

int main (){
    int midato;
    struct nodo *miPunteroReferencia;
    miPunteroReferencia =crearNodo(-1000);

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
            elimNodo(miPunteroReferencia);
        break;


        case 4:
            exit (0);
        };
    };

    return 0;
};

struct nodo* crearNodo (int dato1){
    struct nodo *ptrNuevo;
    ptrNuevo=(struct nodo*)malloc(sizeof(struct nodo));
    ptrNuevo->dato=dato1;
    ptrNuevo->ptrSiguienteuiente=NULL;

    return ptrNuevo;
};

int meterNodo (struct nodo *ptrRef, int dato1){
    struct nodo *ptrNew;
    ptrNew = crearNodo (dato1);
    if (ptrRef->ptrSiguienteuiente==NULL)
        ptrRef->ptrSiguienteuiente=ptrNew;
    else{
        ptrNew->ptrSiguienteuiente=ptrRef->ptrSiguienteuiente;
        ptrRef->ptrSiguienteuiente=ptrNew;
    }
    return 0;
}

int imprCont(struct nodo *ptrRef){
    struct nodo *ptrRecoger;
    ptrRecoger=ptrRef->ptrSiguienteuiente;
    while (ptrRecoger!=NULL){
        printf ("%d\t", ptrRecoger->dato);
        ptrRecoger=ptrRecoger->ptrSiguienteuiente;
    }
return 0;
}

int elimNodo (struct nodo* ptrRef){
    struct nodo *ptrBas;
    if (ptrRef->ptrSiguienteuiente==NULL){
        printf ("La pila esta vacía");
        return -1;
    }
    if (ptrRef->ptrSiguienteuiente->ptrSiguienteuiente==NULL){
        ptrBas=ptrRef->ptrSiguienteuiente;
        ptrRef->ptrSiguienteuiente=NULL;
        printf ("El dato recuperado es %d\n", ptrBas->dato);
        free(ptrBas);
    }
    else {
        ptrBas=ptrRef->ptrSiguienteuiente;
        ptrRef->ptrSiguienteuiente=ptrBas->ptrSiguienteuiente;
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