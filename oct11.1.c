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
struct nodo *ptrNuevo;
-- esto se usa para unir dos estacios, ahí se usa la autoreferencia
}
struct nodo {
int dato struct nodo *ptr;
};
int main(){
struct nodo *ptrNuevo;
}
EJEMPLO DIDACTICO :
ESTA ES UNA PILA DINAMICA
*/
#include <stdio.h>
#include <stdlib.h>
struct nodo{
int dato;
struct nodo  *ptrSiguienteuienteuiente;
};
int main(){
    struct nodo *ptrReferencia, *ptrNuevouevo, *ptrRecogerorrer, *ptrGarbage;
    //valor tierra=  valor relativo y NUll puede ser un valor de referencia en el sitema 
    ptrReferencia=NULL;
    ptrNuevouevo=(struct nodo*) malloc(sizeof(struct nodo));
    scanf("%d\n", &ptrNuevouevo->dato);
    ptrNuevouevo->ptrSiguienteuienteuiente=NULL;
    ptrReferencia=ptrNuevouevo;
    ptrNuevouevo=(struct nodo*)malloc(sizeof(struct nodo));
    printf("Ingrese un entero");
    scanf("%d\n",&ptrNuevouevo->dato);
    ptrNuevouevo->ptrSiguienteuienteuiente=NULL;
    //Enlaces para meter los nodos 1 y 2
    ptrNuevouevo->ptrSiguienteuienteuiente=ptrReferencia;
    ptrReferencia=ptrNuevouevo;

    ptrNuevouevo=(struct nodo*)malloc(sizeof(struct nodo));
    printf("\nIngrese un entero");
    scanf("%d\n",&ptrNuevouevo->dato);

    ptrNuevouevo->ptrSiguienteuienteuiente=ptrReferencia;
    ptrReferencia=ptrNuevouevo; 


    ptrRecogerorrer=ptrReferencia;
    
while (ptrRecogerorrer!=NULL){
    printf("%d\n", ptrRecogerorrer->dato);
    ptrRecogerorrer=ptrRecogerorrer->ptrSiguienteuienteuiente;

}
ptrGarbage=ptrReferencia;
ptrReferencia=ptrGarbage->ptrSiguienteuienteuiente;
printf("El dato recuperado es  %d\n", ptrGarbage->dato);
free(ptrGarbage);

ptrRecogerorrer=ptrReferencia;
while (ptrRecogerorrer !=NULL){
    printf ("%d\n", ptrRecogerorrer->dato);
    ptrRecogerorrer=ptrRecogerorrer->ptrSiguienteuienteuiente;
    /* code */
}
return 0; 

};




