//¿Que hace el programa? 

#include <stdio.h>
// Direccion dememoria - apuntador 
typedef struct //tipo de función de struct
    {
        char nombre[50];
        int edad; 
        float estatura;
        char sexo; 
        

    }Persona;
    

    void ingresarDatos(Persona *p){
        printf("Ingresa tu nombre:  \n");
        scanf("%s", p->nombre); //s- string es un arreglo de caracteres y es una estructura de datos compuesta.

        printf("Ingresa tu edad:  \n");
        scanf("%d", &p->edad);

        printf("Ingresa tu estatura en m ejemplo:(1.8):  \n");
        scanf("%f", &p->estatura);
        
        printf("Ingresa tu sexo M o F:  \n");
        scanf(" %c", &p->sexo); // se agrego un espacio porque caracter tiende a tenr problemas con los saltos de linea y espacios 


    }

    void imprimeDatos(Persona p){

        
        printf("nombre: %s \n", p.nombre);
        printf("edad: %d \n", p.edad);
        printf("estatura: %f \n", p.estatura);
        printf("sexo: %c \n", p.sexo);

    }

int main()
{
    Persona uno;
    Persona Juan={"Juanito", 17, 1.9, 'M'};
    ingresarDatos(&uno); //Pasas la direccion de la estructura
    imprimeDatos(Juan);
    imprimeDatos(uno);// Pasas estrucutra por valor 



    return 0;
}
