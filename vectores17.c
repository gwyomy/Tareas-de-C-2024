/*leer dos vectores a y b ambos de longitud n y luego calculra e imprimir el vector c sabiendo que: c(i) = a(i) + b(i).*/
#include<stdio.h>

int main() {
    int n;
    printf("Ingrese la longitud de los vectores A y B: ");
    scanf("%d", &n); 
    int a[n], b[n], c[n]; 
    for (int i = 0; i < n; i++) {
        printf("Introduzca numero %d para el vector B: ", i + 1);
        scanf("%d", &b[i]); 
    }
    for (int i = 0; i < n; i++)
    {
        printf("Introduzca el elemento nro %d para el vector A: ", i + 1);
        scanf("%d", &a[i]);
        c[i] = a[i]+b[i];/*se carga ;a suma de cada elemento en cada iteracion en el vector c*/
    }
    /*se imprimen los resultados, creo que el codigo es bastante simple, por lo que limite mis comentarios*/
    printf("\tTamanio del vector A: '%d'", n);
    printf("\n----->Elementos del vector C:");
    for (int i = 0; i < n; i++) {
        printf("\n%d ", c[i]); 
    }
    return 0;
}