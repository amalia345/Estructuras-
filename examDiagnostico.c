//Examen diagnostico

#include <stdio.h>
#define TAM 3

struct persona{ // Tipo de dato definido por el usuario
    char nombre [30];
    int edad;
    float est;
    char sexo;
};

struct Datos{
    struct persona arreglo [TAM];
    struct persona *ptr;
};

int meterDatos(struct Datos*);
int imprimirDatos(struct Datos*);

int main (){
    struct Datos datos, *miptrs;
    miptrs=&datos;

    meterDatos (miptrs);

    imprimirDatos(miptrs);


    return 0;
}

int meterDatos(struct Datos *ptrs){
    for (ptrs->ptr=ptrs->arreglo; ptrs->ptr<&ptrs->arreglo[TAM]; ptrs->ptr++){
        printf ("Ingrese nombre\n");
        fflush (stdin);
        gets (ptrs->ptr->nombre);
        printf ("Ingrese edad\n");
        scanf ("%d", &ptrs->ptr->edad);
        printf ("Ingrese estatura\n");
        scanf ("%f", &ptrs->ptr->est);
        fflush (stdin);
        printf ("Ingrese sexo\n");
        ptrs->ptr->sexo=getchar();
    }
    return 0;
}


int imprimirDatos (struct Datos *ptrs){
    for (ptrs->ptr=ptrs->arreglo; ptrs->ptr<&ptrs->arreglo[TAM]; ptrs->ptr++){
            printf ("\n En la celda %d esta el nombre %s, en la direccion %lu", (int)(ptrs->ptr - ptrs->arreglo), ptrs->ptr->nombre, &ptrs->ptr->nombre);
            printf ("\n En la celda %d esta la edad %d, en la direccion %lu", (int)(ptrs->ptr - ptrs->arreglo), ptrs->ptr->edad, &ptrs->ptr->edad);
            printf ("\n En la celda %d esta la edad %f, en la direccion %lu", (int)(ptrs->ptr - ptrs->arreglo), ptrs->ptr->est, &ptrs->ptr->est);
            printf ("\n En la celda %d esta el sexo %c, en la direccion %lu", (int)(ptrs->ptr - ptrs->arreglo), ptrs->ptr->sexo, &ptrs->ptr->sexo);
            printf ("\n -------------------------------------------- \n");
        }

        return 0;
    }






