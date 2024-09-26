//En el index , si tienes una palabra y le pides una letra, quiere la posicion de la letra y la palabra 
//Tarea. Last index of, empieza de el ultimo elemento hasta el primero , es al reves, si le dan el indice, te indique la letra y la palabra
// Tarea hacer funcion copiar cadena que haga strcpy con copiaCad(destino, origen)
#include <stdio.h>
int indexOf (char*, char);

int main(){
    char cadena[30], letraBuscada;
    printf("Ingrese una cadena\n");
    fgets(cadena, 30,stdin);
    printf("Ingrese la letra que desea buscar: \n ");
    scanf("%c", &letraBuscada);

    printf("La letra %c está en la posicion %d de la palabra %s\n", letraBuscada, indexOf(cadena,letraBuscada ), cadena);

    /* code */
    return 0;
}

int indexOf(char* ptr, char caracter){
    char *ptr2;
    ptr2=ptr;
    for( ; *ptr!='\n'; ptr=ptr+1)
        if(caracter==*ptr)
            return((int)(ptr-ptr2));

            return -1;




}
//char char At(char *ptr, int posicion), fata last index y str copy de tarea
