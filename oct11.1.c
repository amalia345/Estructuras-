/*
Reserva de memoraria ->
1.Etstatica(Tiempo de complilacion)-(Variables, arreglos, estructuras)
2.Dinamica(Tiempo de ejecucion)-(Arreglos, estructuras autoreferenciadas)
coid*malloc(size-t size)
CAST del tipo de dato a usar con VOID y también indicar el tamaño del dato a usar con SIZE
NULL- eL ESPACIO NO SE INICIALIZA
void free(void *p)-
ESTRUCTURAS AUTOREFERENCIADAS -  Se usan los nodos, items, y elements
struct nodo {
int dato struct nodo *ptr;
};
int main(){
struct nodo *ptrN;
-- esto se usa para unir dos estacios, ahí se usa la autoreferencia
}
struct nodo {
int dato struct nodo *ptr;
};
int main(){
struct nodo *ptrN;
}
EJEMPLO DIDACTICO :
ESTA ES UNA PILA DINAMICA
*/
#include <stdio.h>
#include <stdlib.h>
struct nodo{
int dato;
struct nodo  *ptrSiguiente;
};
int main(){
    struct nodo *ptrReferencia, *ptrNuevo, *ptrRecorrer, *ptrGarbage;
    //valor tierra=  valor relativo y NUll puede ser un valor de referencia en el sitema 
    ptrReferencia=NULL;
    ptrNuevo=(struct nodo*) malloc(sizeof(struct nodo));
    scanf("%d\n", &ptrNuevo->dato);
    ptrNuevo->ptrSiguiente=NULL;
    ptrReferencia=ptrNuevo;
    ptrNuevo=(struct nodo*)malloc(sizeof(struct nodo));
    printf("Ingrese un entero");
    scanf("%d\n",&ptrNuevo->dato);
    ptrNuevo->ptrSiguiente=NULL;
    //Enlaces para meter los nodos 1 y 2
    ptrNuevo->ptrSiguiente=ptrReferencia;
    ptrReferencia=ptrNuevo;

    ptrNuevo=(struct nodo*)malloc(sizeof(struct nodo));
    printf("\nIngrese un entero");
    scanf("%d\n",&ptrNuevo->dato);

    ptrNuevo->ptrSiguiente=ptrReferencia;
    ptrReferencia=ptrNuevo; 


    ptrRecorrer=ptrReferencia;
    
while (ptrRecorrer!=NULL){
    printf("%d\n", ptrRecorrer->dato);
    ptrRecorrer=ptrRecorrer->ptrSiguiente;

}
ptrGarbage=ptrReferencia;
ptrReferencia=ptrGarbage->ptrSiguiente;
printf("El dato recuperado es  %d\n", ptrGarbage->dato);
free(ptrGarbage);

ptrRecorrer=ptrReferencia;
while (ptrRecorrer !=NULL){
    printf ("%d\n", ptrRecorrer->dato);
    ptrRecorrer=ptrRecorrer->ptrSiguiente;
    /* code */
}
return 0; 

};




