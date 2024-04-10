/*se tiene en memoria un vector A de longitud N, hacer un algoritmo que imprima todas las posiciones de A que sean iguales a una X leida*/
#include<stdio.h>
int main(){
    int n, posicion = 0, arbitro = 0, x ;
    printf("introduzca la longitud del vector: ");
    scanf("%d", &n);
    int a[n], vector[0];
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese el elemento nro '%d': ", i);
        scanf("%d", &a[i]);
    }
    printf("Introduzca la posicion del elemnto que desea ver: ");
    scanf("%d", &posicion);
    for (int i = 0; i < n; i++)
    {
        int x = a[i];/*guarda los elementos del vector principal en cada iteracion*/
        if (posicion == i) /*si la posicion que ingresa el usuario coincide con el contador, imprimira el elemento que se cargo en ese momento*/
            printf("%d", x);
        }
    return 0;
}