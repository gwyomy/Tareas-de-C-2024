/*dado un vector d k comps, hacer un algoritmo cque permita hallar el mayor y el menor elemento con sus posiciones respectivas*/
#include<stdio.h>
int main(){
    int k, mayor = -999, menor = 0, p = 0, pm = 0;
    printf("Escriba la longitud del vector: ");
    scanf("%d", &k);
    int a[k];

    for (int i = 0; i < k; i++)
    {
        printf("Introduzca cada componente (nro '%d'): ", i+1);
        scanf("%d", &a[i]);
        if (a[i] > mayor) /*si el componente es mayor que -999 se almacenara en 'mayor'*/
        {
            mayor = a[i];
            p = i+1;/*se encarga de guardar la posicion*/
        }
        else /* de lo contrario se almacenara en menor*/
        {
            menor = a[i];
            pm = i+1;/*este tambien guarda la posicion, pero del menor*/
        }
    }
    printf("Mayor componente: %d-------------->\tPosicion:%d", mayor, p);
    printf("\nMenor componente: %d-------------->\tPosicion:%d", menor, pm);












    return 0;
}