
//ARBOLES 
#include<stdio.h>
#include<stdlib.h>

struct nodo{
    int cont;
    struct nodo *izq;
    struct nodo *der;
};

struct nodo *crearnodo(int datoent){
    struct nodo *new=(struct nodo *) malloc(sizeof(struct nodo));
    new->cont= datoent;
    new->izq= NULL;
    new->der= NULL;
    return new;
}

void insertarnodo(struct nodo **raiz,int datoent){
    if (*raiz==NULL){
        *raiz=crearnodo(datoent);
    }else if(((*raiz)->cont)>datoent){
        insertarnodo(&((*raiz)->izq),datoent);
    }else{
        insertarnodo(&((*raiz)->der),datoent);
    }
}

void imprimirpreorden(struct nodo *raiz){
    if(raiz!=NULL){
        printf("dato:%d   \n",raiz->cont);
        imprimirpreorden(raiz->izq);
        imprimirpreorden(raiz->der);
    }
}

int contar(struct nodo *ptr){
	if(ptrRaiz==NULL)
	return 0;
	else{
		1+contar(ptr->izq)+contar(ptr->der);
	}
}

int menu(){
    int opc;
    printf("1.Meter \n");
    printf("2.imprimir\n");
    printf("3.Salir\n");
    printf("Ingrese su opcion:\t");
    scanf("%d", &opc);
    return opc;
};

int main(){
    struct nodo *miptrRef = NULL;  // Inicializamos el árbol vacío
    int midato;

   for(;;){
    switch(menu()){
    case 1:
        printf("Ingrese su dato: ");
        scanf("%d", &midato);
        insertarnodo(&miptrRef, midato); 
        break;
    case 2:
        imprimirpreorden(miptrRef);
        break;
    case 3:
        contar(miptrRef);
        break;
    case 4:
         exit(0);
    }
   }

};