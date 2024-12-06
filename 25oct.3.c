//Cola dinamica con 2 referencias usando doble apuntador obligatoriamente con doble enlace 

//Laso izquierdo para meter y lado derecho para sacar 
//Hacer un diagrama  como primer paso  
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
    struct nodo *ptrReferencia22, **ptrReferencia22;
    ptrReferencia22=NULL&&ptrReferencia22==NULL;
    ptrReferencia11=ptrN;
    ptrReferencia22=ptrN;
    int midato;


    for (;;){
        switch (menu()){
        case 1:
           printf ("Ingrese dato\n");
           scanf ("%d",&midato);
           meterNodo (ptrReferencia22,midato);

        break;

        case 2:
            imprCont(ptrReferencia22);

        break;

        case 3:
            elimNodo(ptrReferencia22);
        break;


        case 4:
            exit (0);
        };
    }
    return 0;
}


struct nodo* crearNodo (int dato1){
    struct nodo *ptrN;
    ptrN=(struct nodo*)malloc(sizeof(struct nodo));
    ptrN->dato=dato1;
    ptrN->ptrSiguiente=NULL;

    return ptrN;
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
    struct nodo *ptrRec;
    ptrRec=*ptrRef2;
    while (ptrRec!=NULL){
        printf ("%d\t", ptrRec->dato);
        ptrRec=ptrRec->ptrSiguiente;
    }
return 0;
}

int elimNodo (struct nodo **ptrRef2){
    struct nodo *ptrBas, *ptrAv, *ptrRet;
    if ((*ptrRef2)==NULL){
        printf ("La cola esta vacía");
        return -1;
    }
    if ((*ptrRef2)->ptrSiguiente==NULL){
        ptrBas=(*ptrRef2);
        (*ptrRef2)=NULL;
        printf ("El dato recuperado es %d\n", ptrBas->dato);
        free(ptrBas);
    }
    else {
        ptrAv=(*ptrRef2)->ptrSiguiente;
        ptrRet=*ptrRef2;
        while (ptrAv->ptrSiguiente!=NULL){
        ptrAv=ptrAv->ptrSiguiente;
        ptrRet=ptrRet->ptrSiguiente;
        }
        ptrBas=ptrAv;
        ptrRet->ptrSiguiente=NULL;
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
