//Checar si una cadena ingresada desde el techado es un palindromo primera version.
//Palindromo es una palabra que se escribe igual al derecho y al reves 
//COncatenacion de cadena--> investigar 
//Bandera: Si se cumplio o no  la condicion 
#include <stdio.h>


int main(int argc, char const *argv[])
{
    char cadena[20], *ptr1, *ptr2;//ptr son los punteros
    int bandera=1; //Por default es palindromo o es cierto.
    printf("Ingresa una cadena : ");
    *fgets(cadena,20,stdin);
    //fgets(cadena, 30, stain);

    for (ptr2 = cadena; *ptr2!='\n'; ptr2=ptr2+1);
        
        for ( ptr1 = cadena, ptr2=ptr2-1; ptr1 < ptr2; ptr1=ptr1+1, ptr2=ptr2-1){
            
        if (*ptr1==*ptr2)
            continue;//SI se cumple la condicion sigue avanzando el ciclo for
            //bandera==1;
            else{
            bandera=0;
            break;
            // utilizar un brake 
            }
        }
        if (bandera==1)
            printf("\n si es un palindromo");
            else
                printf("\n no es un palindromo");
        
    

    
    
    

    return 0;
}

