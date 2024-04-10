/*Sabiendo que se tiene en memoria un vector de tamaño N (N es par), hacer un algoritmo que permita Intercambiar todos los elementos de la primera mitad, con los elementos de la segunda mitad*/
#include<stdio.h>
int main(){
    int n, mitad = 0, otramitad = 0;
    printf("Introduzca el tamanio del vector, debe ser par: ");
    scanf("%d", &n);
    int a[n];
    if (n%2 == 0)
    {
        for (int i = 0; i < n; i++)
    {
        printf("Ingresa los elementos del vector: ");
        scanf("%d", &a[i]);
    }
    mitad = n/2;
    for (int i = 0; i < mitad; i++)
    {
        otramitad = a[i]; /*basicamente se intercambian los elementos de una mitad con la otra*/
        a[i] = a[i + mitad];
        a[i + mitad] = otramitad;/*como los aux de pseudocodigo*/
    }
    printf("\tVector modificado: ");/*se imprime ya el vector con las modificaciones*/
    for (int i = 0; i < n; i++)
    {
        printf("\n%d", a[i]);
    }
    }
    else
    {
        printf("Error, capaz ingreso un numero impar como longitud del vector...");
    }
    return 0;
}