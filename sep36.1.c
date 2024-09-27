#define TAM 5
includestd

struct persona{

    /* data */
    char nombre[30]; //tipo de dato definido por el usuario
    int edad;
    float estatura;
    char sexo;
};
struct Datos{
    /* Tratar de encapsular las funciones, es la mejor manera de encontrar errores */
    struct persona arreglo[TAM];
    struct persona *ptr;
};
int meterDatos(struct Datos *ptrs);
int imprimirDatos(struct Datos *ptrs);


int main(){
    /* code */
    struct Datos datos, *miptrs;
    miptrs=&datos;

for ( ; ;){
    switch (menu()){
    case 1:
        meterDatos(miptrs);
        break;
    case 2:
        imprimeDatos(miptrs);
        break;
    case 3:
        exit(0);
    
    default:
        printf("Ingrese solo del 1 al 3");
        return 0;
    }
    
}

    return 0; 
}
int meterDatos(struct Datos *ptrs){
    for (ptrs->ptr= ptrs->arreglo; ptrs->ptr < &ptrs->arreglo[TAM]; ptrs->ptr++){
        printf("Ingresa tu nombre:");
        gets(ptrs->ptr->nombre);
        printf("\nIngresa tu edad:");
        scanf("%d", &ptrs->ptr->edad);
        peintf("\nIngrese estatura");
        printf("%f", &ptrs->ptr->estatura);
        printf("\nIngrese el sexo:");
        ptrs->ptr->sexo=getchar();


        /* code */
    }
    return 0;
    
}
int imprimirDatos(struct Datos *ptrs){
    for (ptrs->ptr= ptrs->arreglo; ptrs->ptr < &ptrs->arreglo[TAM]; ptrs->ptr++){
        //Aqui podemos agregar un if(longCad(ptrs->ptr->nombre)>5)
        printf("\nEn la celda %d esta el nombre %s en la dirección %lu",(int)(ptrs->ptr-ptrs->arreglo),ptrs->ptr->nombre,&ptrs->ptr->nombre);
        /* code */
    }
    return 0;
}

