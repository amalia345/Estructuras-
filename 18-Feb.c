#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Realizar un programa en lenguaje C que genere un número random y el usuario adivine el número de que se trata con las condiciones < (menor), > (mayor) o = (igual).
1. El número debe ser entero positivo.
2. El rango a buscar lo define las preguntas que se van realizando.
3. Mostrar el total de preguntas realizadas.

¿Cuál fue el número mayor de preguntas? (el peor caso)
¿Cuál fue el número menor de preguntas? (el mejor caso)
¿Cuál fue el promedio de preguntas realizadas? (caso medio)*/

int main() {
    int numero, adivinanza, preguntas = 0;
    int min = 1, max = 100;
    int mejor_caso = 0, peor_caso = 0, total_preguntas = 0;
    int intentos = 0;

    // Inicializar la semilla para generar números aleatorios
    srand(time(0));

    // Generar un número aleatorio entre 1 y 100
    numero = rand() % 100 + 1;

    printf("Adivina el número entre 1 y 100.\n");

    do {
        printf("Ingresa un número entre %d y %d: ", min, max);
        scanf("%d", &adivinanza);
        preguntas++;//contador de las veches que vas preguntando 

        if (adivinanza < numero) {
            printf("El número es mayor.\n");
            min = adivinanza + 1;
        } else if (adivinanza > numero) {
            printf("El número es menor.\n");
            max = adivinanza - 1;//Actualizamos el maximo 
        } else {
            printf("¡Felicidades! Adivinaste el número en %d preguntas.\n", preguntas);
        }
    } while (adivinanza != numero);//Ciclo para ir contando  
    //while significa que hasta que  
    //while para que cada que hagas un numero 

    // Calcular el mejor caso, peor caso y promedio
    mejor_caso = 1; // El mejor caso es adivinar en el primer intento
    peor_caso = 7;  // El peor caso es adivinar en 7 intentos (búsqueda binaria en 100 números)
    total_preguntas += preguntas;

    printf("\nResumen:\n");
    printf("Mejor caso: %d pregunta(s)\n", mejor_caso);
    printf("Peor caso: %d preguntas\n", peor_caso);
    printf("Promedio de preguntas realizadas: %.2f\n", (float)total_preguntas / 1);

    return 0;
}