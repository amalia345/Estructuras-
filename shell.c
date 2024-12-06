#include<stdio.h>
#include <stdlib.h>
#include <time.h>

void llenaArreglo (int, int, int []);
void imprimeArreglo (int, int []);
void shellSort(int [], int );

int main (){

    int nums [200], n, maximo;
    printf ("Dame el numero de elementos del arreglo\n");
    scanf ("%d",&n);

    printf ("Dame el numero mas grande en el arreglo\n");
    scanf ("%d",&maximo);

    llenaArreglo (n,maximo,nums);
    imprimeArreglo (n, nums);

    shellSort (nums,n);



    return 0;
}

void llenaArreglo (int n, int mayor, int arr []){
    srand (time (NULL)); //semilla de que sean numeros aleatoreos
    for (int i=0; i<n; i++)
        arr [i]=rand()%mayor;

}

void imprimeArreglo (int n, int arr []){
        for (int i=0; i<n; i++){
        printf("%d\t",arr [i]);
    }
    printf("\n");
}

void shellSort(int arr[], int n) {//n numero de elementos creados
    for (int gap = n / 2; gap > 0; gap /= 2) { //gap es el espacio entre cada caja
        for (int i = gap; i < n; i++) {//Aqui tendremos las cajas separadas
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                //Aqui comparamos los numeros uno a uno
                arr[j] = arr[j - gap];
                //Aqui agrgariamos un if else y hace ola compraracion y los intercambia si es mayor
            }
            arr[j] = temp;
        }
        printf("Después de gap = %d: \n", gap);//La impresion definitiva de cada sub lista
        imprimeArreglo(n, arr);//aqui se quedan cajas de 1 elemento y se termina todo 
    }
}




