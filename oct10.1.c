///Cardigan Riche 
#include <stdio.h>

#define TAM 5
struct Cola{
int arreglo[TAM]
int ptrM, ptrs;
};
//prototipos
int main(int argc, char const *argv[])
{
    struct Cola cola, *miptrC;
    int miDato;
    miptrC=&cola;
    miptrC->ptrM=miptrC->arreglo;
    miptrC->ptrs=miptrC->arreglo;
    return 0;
}
int meterEnCola(struct Cola *ptrC, int dato){
    *ptrC->ptrM=dato;
    ptrC->ptrM++;
    return 0; 
}
int sacarDeCola(struct Cola *ptrC){
int varAuxiliar;
var= *ptrC->ptrs;
ptrC->ptrs++;
rerurn varAuxiliar;
}
int resetearCOla(struct Cola *ptrC){
    ptrC->ptrM=ptrC->arreglo;
    ptrC->ptrs=ptrC->arreglo;
    return 0;
}
int estaColaVacia(struct Cola *ptrC){
    if(ptrC->ptrM==ptrC->ptrs)
        return 1;
    else
    return 0;
}
int estaColaLlena(struct Cola *ptrC){
    if(ptrC->ptrM==&ptrC->arreglo[TAM])
    return 1; 
    else
    return 0;
}