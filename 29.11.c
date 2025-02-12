//Arbol imprimir preorden

#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int contenido;
    struct nodo *ptrIzq;
    struct nodo *ptrDer;
};

struct nodo *crearNodo(int datoEnt){
    struct nodo *ptrNuevo=(struct nodo*) malloc(sizeof(struct nodo));
    ptrNuevo->contenido=datoEnt;
    ptrNuevo->ptrIzq=NULL;
    ptrNuevo->ptrDer=NULL;
    return ptrNuevo;
}

void insertarNodo(struct nodo **ptrRaiz, int datoEnt){
    if (*ptrRaiz==NULL){
        *ptrRaiz=crearNodo(datoEnt);
    }else if(((*ptrRaiz)-> contenido)>datoEnt){
        insertarNodo(&((*ptrRaiz)->ptrIzq),datoEnt);
    }else {
        insertarNodo (&((*ptrRaiz)->ptrDer),datoEnt);
    }
}

void imprimirPreorden (struct nodo *ptrRaiz){
    if (ptrRaiz!=NULL){
        printf ("Dato: %d\n", ptrRaiz->contenido);
        imprimirPreorden(ptrRaiz->ptrIzq);
        imprimirPreorden(ptrRaiz->ptrDer);
    }
}

int menu(){
        int opc;
        printf ("1 Para meter dato\n");
        printf ("2 Imprimir contenido preorden\n");
        printf ("3 Para salir\n");
        scanf ("%d", &opc);

        return opc;

    }



int main (){
    int dato, clave;
    struct nodo *miptr;
    printf ("Ingrese clave\n");
    scanf ("%d", &clave);
    miptr=crearNodo(clave);


    for (;;){
        switch (menu()){
        case 1:
            printf ("Ingrese dato\n");
           scanf ("%d",&dato);
           insertarNodo(&miptr,dato);

        break;

        case 2:
            imprimirPreorden(miptr);

        break;


        case 3:
            exit (0);
        };
    }
    return 0;
}

