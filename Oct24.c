#include <stdio.h>
#define TAM 3


struct Cola{
    int arreglo [TAM];
    int *ptrM,*ptrS;
};

int meterenCola (struct Cola*, int);
int sacardeCola (struct Cola*);
int estaVacialaCola (struct Cola*);
int estaLlenalaCola (struct Cola*);
int resetearCola (struct Cola*);
int menu();

int main (){
    struct Cola cola, *miptrC;
    int miDato;
    miptrC=&cola;
    miptrC->ptrM=miptrC->arreglo;
    miptrC->ptrS= miptrC->arreglo;

   for (;;){
        switch (menu()){
        case 1:
            if (estaLlenalaCola(miptrC))
                printf ("\n La cola esta llena\n");
            else {
                printf ("\n Ingrese el dato\n");
                scanf ("%d", &miDato);
                meterenCola(miptrC, miDato);
            }
        break;

        case 2:
            if (estaVacialaCola(miptrC))
                printf ("\n La cola esta vacia\n");
            else
                printf ("\n El dato recuperado es %d\n", sacardeCola(miptrC));
        break;

        case 3:
            resetearCola(miptrC);
            printf ("\nCola reseteada\n");
            break;

        case 4:
            exit (0);
        }
    }

    return 0;
}



int meterenCola (struct Cola *ptrC, int dato){
    *ptrC->ptrM=dato;
    ptrC->ptrM++;
    return 0;
}
int sacardeCola (struct Cola *ptrC){
    int varAux;
    varAux= *ptrC->ptrS;
    ptrC->ptrS++;
    return varAux;
}
int estaVacialaCola (struct Cola *ptrC){
    if (ptrC->ptrM==ptrC->ptrS)
        return 1;
    else
        return 0;
}
int estaLlenalaCola (struct Cola *ptrC){
    if (ptrC->ptrM == &ptrC->arreglo[TAM])
        return 1;
    else
        return 0;
}

int resetearCola (struct Cola *ptrC){
    ptrC->ptrM = ptrC->arreglo;
    ptrC->ptrS = ptrC->arreglo;
    return 0;
}

int menu(){
        int opc;
        printf ("\n 1 Para meter datos\n");
        printf ("\n 2 Para sacar datos\n");
        printf ("\n 3 Para resetear la cola\n");
        printf ("\n 4 para salir\n");
        printf ("\nIngrese opcion\n");
        scanf ("%d", &opc);

        return opc;

    }
    