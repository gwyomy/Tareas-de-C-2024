/*dado un vector de n elementos, hacer un algoritmo que permita hallar el mayor elemento del vector*/
#include<stdio.h>
int main(){
    int n, mayor = -999, menor = 0;
    printf("Ingrese la longitud del vector: ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Introduzca cada componente: ");
        scanf("%d", &a[i]);
        if (a[i] > mayor) /*si el componente es mayor que -999 (espero y no pongan un nro menor), se almacenara en 'mayor'*/
        {
            mayor = a[i];
        }
        if (a[i] < mayor) /*hubiera puesto un else.... de lo contrario se almacenarian aqui, en menor*/
        {
            menor = a[i];
        }
        
        
    }
    printf("El mayor componente del vector es: %d", mayor);
    return 0;
}