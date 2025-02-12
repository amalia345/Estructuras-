#include <stdio.h>
#include <stdlib.h>
#define TAM 3


struct Persona {
    char nombre[30];
    int edad;
    float est;
    char sexo;
};

struct Cola{
    struct Persona arreglo[TAM];
    struct Persona *ptrM, *ptrS;
};

int meterenCola (struct Cola*, struct Persona*);
int sacardeCola (struct Cola*, struct Persona*);
int estaVacialaCola (struct Cola*);
int estaLlenalaCola (struct Cola*);
int resetearCola (struct Cola*);
int menu();

int main (){
    struct Cola cola, *miptrC;
    struct Persona miDato;
    miptrC=&cola;
    miptrC->ptrM=miptrC->arreglo;
    miptrC->ptrS= miptrC->arreglo;

   for (;;){
        switch (menu()){
        case 1:
            if (estaLlenalaCola(miptrC))
                printf ("\n La cola esta llena\n");
            else {
                printf ("\n Ingrese el nombre\n");
                fflush(stdin);
                gets (miDato.nombre);
                fflush(stdin);
                printf ("\n Ingrese edad\n");
                scanf ("%d", &miDato.edad);
                printf ("\n Ingrese estatura\n");
                scanf ("%f", &miDato.est);
                printf ("\n Ingrese sexo\n");
                fflush(stdin);
                miDato.sexo = getchar();
                fflush(stdin);
                meterenCola(miptrC,&miDato);
            }
        break;

        case 2:
            if (estaVacialaCola(miptrC))
                printf ("\n La cola esta vacia\n");
            else {
                sacardeCola(miptrC,&miDato);
                printf ("\n Datos recuperados: %s,\t%d, \t %f,\t %c\n", miDato.nombre, miDato.edad, miDato.est, miDato.sexo);
            }

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



int meterenCola (struct Cola *ptrC, struct Persona *ptrDato){
    strcpy (ptrC->ptrM->nombre, ptrDato ->nombre);
    ptrC->ptrM->edad = ptrDato->edad;
    ptrC->ptrM->est = ptrDato->est;
    ptrC->ptrM->sexo = ptrDato->sexo;
    ptrC->ptrM++;
    return 0;
}
int sacardeCola (struct Cola *ptrC, struct Persona *ptrDato){
    strcpy (ptrDato->nombre, ptrC->ptrS->nombre);
    ptrDato->edad = ptrC->ptrS->edad;
    ptrDato->est=ptrC->ptrS->est;
    ptrDato->sexo=ptrC->ptrS->sexo;
    ptrC->ptrS++;
    return 0;
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