/*hallar la union de a y b en un  nuevo vector c, de manera que el vector c no tenga elemebtos repetidos*/
#include <stdio.h>
int main() {
    int n, contadordeC = 0, elementosrepetidos = 0;
    printf("Introduzca la longitud de A, B y C: ");
    scanf("%d", &n);
    int a[n], b[n], c[n*n];
    for (int i = 0; i < n; i++) 
    {
        printf("Ingrese el elemento nro '%d' del vector A: ", i + 1);
        scanf("%d", &a[i]); 
    }
    for (int i = 0; i < n; i++) 
    {
        printf("Ingrese el elemento nro '%d' del vector B: ", i + 1);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        c[contadordeC++] = b[i]; /*los elementos de b se cargan en c, que que indica el nro de elementos en c*/
        for (int i = 0; i < contadordeC - 1; i++) /*pasos de verificacion ---->*/
        {
            if (c[i] == b[i]) /*si el elemento actual de c es igual al de b, la variable 'elementos repetidos' se torna '1' y se rompe el bucle interno*/
            {
                elementosrepetidos = 1;
                break;
            }
        }
        if (!elementosrepetidos) /*se verifica la falsedad de la existencia de elementos repetidos con '!' para copair los elementos de a en el vector c*/
        {
            c[contadordeC++] = a[i]; 
        }
    }
    printf("\tComponentes del vector C: ");
    for (int i = 0; i < contadordeC; i++) 
    {
        printf("\n%d ", c[i]); 
    }
    return 0;
}