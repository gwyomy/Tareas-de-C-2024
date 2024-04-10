/*Se tiene en memoria un vector B de tamaño X. Hacer un algoritmo que permita crear un vector A a partir de B, tal que cada A(X) = B(X) - mayor que B*/
#include<stdio.h>
int main(){
    int x, mayor = -9999, menor = 0;
    printf("Introduzca la longitud del vector B: ");
    scanf("%d", &x);
    int b[x], a[x];
    for (int i = 0; i < x; i++)
    {
        printf("Introduzca los elementos del vector B: ");
        scanf("%d", &b[i]);
        if (b[i] > mayor) /*si el componente es mayor que -9999 se almacenara en 'mayor'*/
        {
            mayor = b[i];
        }
    }
    printf("\tElementos A: ");
    for (int i = 0; i < x; i++)
    {
        a[i] = b[i]-mayor; //se resta cada elemento maximo de b[x] y este nuevo valor se almacena en a[x]
    }

    for (int i = 0; i < x; i++)
    {
        printf("\n%d", a[i]);/*se imprimen en orden los elementos de a*/
    }
    

    return 0;
}