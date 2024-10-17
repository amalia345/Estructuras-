//Pila dinámica sin nodo de cabecera(para enteros )
struct nodo{
    /* data */
    struct nodo *ptrSiguiente;
    int dato; 
};
int main(){
    struct nodo *miptrReferencia1, **miptrReferencia2;
    miptrReferencia1==NULL;
    miptrReferencia2=&miptrReferencia1;
    return 0;
}
int meterNodo(struct nodo **ptrReferencia2, int dato1){
    struct nodo *ptrNuevo;
        ptrNuevo= crearNodo(dato1)
            if((ptrReferencia2)==NULL)
            (*ptrReferencia2)=ptrNuevo;
            else{
            ptrNuevo->ptrSIguiente=ptrReferencia2;
                ptrReferencia2=ptrNuevo;
            }
}
int imprimirContenido(struct nodo **ptrReferencia2, int dato1){
    struct nodo *ptrRecorrer;
    ptrRecorrer=*ptrReferencia2;
}