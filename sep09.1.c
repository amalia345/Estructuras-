/*Tipos de datos:  
1.Pimitivos-
2.Definidos por usuario    -Arreglo y struct(datos de campo)
vmao sa usar struct, ponerle nombre 
int getchar(void); 
int var
var=printf(Holamundo);
printf("%d", var)- va a regresar el numero de caracteres*/


#include <stdio.h>

struct persona{ //La plantilla del nuevo tipo de dato 
    char nombre[30];
    int edad;
    float estatura;
    char sexo; 
//Acceso de los miembros de la Estructura: 1)Instancia o variable de una estructura, aqui se emplea el oprador punto
//2)Apuntadora a una variable de estrctura, entonces se usa operador ->
};


int main(){
    struct persona humano1,*ptr;
        //ptr=*humano1;
        ptr=&humano1;
        printf("Ingrasa nombre de Humano 1:");

        //gets(humano1.nombre);
        gets(ptr->nombre);

        //scanf("%d", &humano1.edad);
        scanf("%d", &ptr ->edad);
        
        //humano1.sexo=getchar(); 
        ptr -> sexo=getchar();
        //


    return 0;
};