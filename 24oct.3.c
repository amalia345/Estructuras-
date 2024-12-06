// cola dinamica con dos nodos de cabecera con doble enlace
#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int dato;
    struct nodo *ptrSiguiente,*ptrAnt;
};

struct nodo* crearNodo (int);
int meterNodo (struct nodo*, struct nodo*,int);
int imprCont1(struct nodo*);
int imprCont2(struct nodo*);
int elimNodo (struct nodo*, struct nodo*);
int menu();


int main(){
    int midato;
    struct nodo *miptrRef1,*miptrRef2;
    miptrRef1 =crearNodo(-1000);
    miptrRef2= crearNodo(-2000);
    miptrRef1->ptrSiguiente=miptrRef2;
    miptrRef2->ptrAnt=miptrRef1;

    for (;;){
        switch (menu()){
        case 1:
           printf ("Ingrese dato\n");
           scanf ("%d",&midato);
           meterNodo (miptrRef1,miptrRef2,midato);

        break;

        case 2:
            imprCont1(miptrRef1);

        break;

        case 3:
            imprCont2(miptrRef2);

        break;


        case 4:
            elimNodo(miptrRef1,miptrRef2);
        break;

        case 5:
            exit (0);
        }
    }
    return 0;


}


struct nodo* crearNodo (int dato1){
    struct nodo *ptrN;
    ptrN=(struct nodo*)malloc(sizeof(struct nodo));
    ptrN->dato=dato1;
    ptrN->ptrSiguiente=NULL;
    ptrN->ptrAnt=NULL;
    return ptrN;
};

int meterNodo (struct nodo *ptrRef1, struct nodo *ptrRef2, int dato1){
    struct nodo *ptrNew;
    ptrNew = crearNodo (dato1);
    if (ptrRef1->ptrSiguiente== ptrRef2 && ptrRef2->ptrAnt==ptrRef1){
        ptrNew->ptrSiguiente=ptrRef2;
        ptrRef2->ptrAnt=ptrNew;
        ptrNew->ptrAnt=ptrRef1;
        ptrRef1->ptrSiguiente=ptrNew;
    }
    else{
        ptrNew->ptrSiguiente=ptrRef1->ptrSiguiente;
        ptrRef1->ptrSiguiente->ptrAnt=ptrNew;
        ptrNew->ptrAnt=ptrRef1;
        ptrRef1->ptrSiguiente=ptrNew;
    }
    return 0;
}

int imprCont1(struct nodo *ptrRef1){
    struct nodo *ptrRec;
    ptrRec=ptrRef1->ptrSiguiente;
    while (ptrRec->ptrSiguiente!=NULL){
        printf ("%d\t", ptrRec->dato);
        ptrRec=ptrRec->ptrSiguiente;
    }
return 0;
}

int imprCont2(struct nodo *ptrRef2){
    struct nodo *ptrRec;
    ptrRec=ptrRef2->ptrAnt;
    while (ptrRec->ptrAnt!=NULL){
        printf ("%d\t", ptrRec->dato);
        ptrRec=ptrRec->ptrAnt;
    }
    return 0;
}

int elimNodo (struct nodo* ptrRef1, struct nodo *ptrRef2){
    struct nodo *ptrBas, *ptrAv, *ptrRet;

    if (ptrRef1->ptrSiguiente==ptrRef2 && ptrRef2->ptrAnt==ptrRef1){
        printf ("La cola esta vacía");
        return -1;
    }
    if (ptrRef2->ptrAnt->ptrAnt==ptrRef1){
        ptrBas=ptrRef2->ptrAnt;
        ptrRef1->ptrSiguiente=ptrRef2;
        ptrRef2->ptrAnt=ptrRef1;
        printf ("El dato recuperado es %d\n", ptrBas->dato);
        free(ptrBas);
    }
    else {
        ptrBas=ptrRef2->ptrAnt;
        ptrBas->ptrAnt->ptrSiguiente=ptrRef2;
        ptrRef2->ptrAnt=ptrBas->ptrAnt;
        printf ("El dato recuperado es %d\n", ptrBas->dato);
        free(ptrBas);

    }
    return 0;
}




int menu(){
        int opc;
        printf ("\n 1 Para meter nodo\n");
        printf ("\n 2 Imprimir contenido \n");
        printf ("\n 3 Para imprimir contenido atras hacia adelante\n");
        printf ("\n 4 Para eliminar nodo\n");
        printf ("\n 5 Para salir\n");
        scanf ("%d", &opc);

        return opc;
    }

