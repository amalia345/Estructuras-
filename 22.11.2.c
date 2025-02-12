//INVERTIR CADENA RECURSIVA


#include <stdio.h>


int invierteCadenaRecur(const char *cad) {
    if (*cad == '\0') {
        return 0;
    } else {
        return 1 + longCadRecur(cad + 1);
    }
}

int main(){
    char cadena[100];
    printf("Ingresa la cadena\n");
    scanf ("%s",cadena);
    printf ("\La longitud de cadena es %d\n", longCadRecur(cadena));

    return 0;
}