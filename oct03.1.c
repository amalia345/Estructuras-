//ALgo parecido al examamen pero con pilas
#include<stdio.h>
#define TAM[10]
struct persona{
    /* data */
    char nombre[30];
    int edad; 
    float estatura; 
    char sexo; 

};
struct Pila{
    /* data */
    struct persona arreglo[TAM];
    struct persona *ptrC;

};
//prototipos
int meterPila(struct Pila *ptrP, struct persona *ptrDato);
int sacarDePila(struct Pila *ptrP, struct persona *ptrDato);
int estaVaciaPila(struct Pila *ptrP);
int estallenaPila(struct Pila *ptrP);
int menu();

int main(){
    struct Pila pila, *miptrP;
    struct persona miDato;
    miptrP=&pila;
    miptrP->ptrC=miptrP->arreglo;

    for (; ;){
        /* code */
        switch (menu()){
        case 1:
            /* code */
            if (estallenaPila(miptrP))
                printf("\nLa pila esta llena!!!");
            else{
                printf("\nIngrese el nombre: ");
                gets(miDato.nombre);
                printf("\nIngrese la edad: ");
                scanf("%d", &miDato.edad);
                printf("\nIngrese la estatura: ");
                scanf("%f",&miDato.estatura);
                printf("\nIngrese el sexo:");
                miDato.sexo=getchar();
                meterPila(miptrP, &miDato);

            }
            
            break;
        case 2:
            if(estaVaciaPila(miptrP))
            printf("\nLa pila esta vacía!");
            else{
                sacarDePila(miptrP, &miDato);
                printf("\nDatos recuperado: %s \t %d \t %d \t %f \t %c", miDato.nombre, miDato.edad, miDato.estatura, miDato.sexo);
            }
            
            break;
        case 3:
            exit(0);

        }

    }
    return 0;

}
int meterPila(struct Pila *ptrP, struct persona *ptrDato){
strcpy(ptrP->ptrC->nombre, ptrDato->nombre);
ptrP->ptrC->edad=ptrDato->edad;
ptrP->ptrC->estatura=ptrDato->estatura;
ptrP->ptrC->sexo=ptrDato->sexo;
ptrP->ptrC++;
return 0;
}
int sacarDePila(struct Pila *ptrP, struct persona *ptrDato){
ptrP->ptrC--;
strcpy(ptrDato->nombre, ptrP->ptrC->nombre);
ptrDato->edad=ptrP->ptrC->edad;
ptrDato->estatura=ptrP->ptrC->estatura;
ptrDato->sexo=ptrP->ptrC->sexo;
return 0; 
}
int estallenaPila(struct Pila *ptrP){
    if(ptrP->ptrC==&ptrP->arreglo[TAM])
        return 1;
    else
        return 0;
}

int menu(){
    int opciones;
    printf("\n 1 Para meter datos\n");
    printf("\n 2 Para meter datos\n");
    printf("\n Para salir\n");
    scanf("%d", &opciones);

    return opciones;
}
//Examen proximo vienes 
//chacar lo de fgets dirente con linux


