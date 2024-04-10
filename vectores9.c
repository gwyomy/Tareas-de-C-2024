/*se tiene en memoria un vector A de K componentes, hacer un algoritmo que permita obtener la sumatoria de todas sus posiciones pares.*/
#include<stdio.h>
int main(){
    int k, sumapares = 0;
    printf("Introduce la longitud del vector: ");
    scanf("%d", &k);
    int a[k];

    for (int i = 1; i <= k; i++)
    {
        printf("Ingresa el elemento nro '%d' del vector : ", i);
        scanf("%d", &a[i]);
        if (i%2 == 0)/*si el resto del contatdor '%2' es igual a cero indicaria que el numero es par, por ende se almacenaria en 'sumapares' e incrementaria en cada iteracion sumando a los siguiuentes componentes*/
        {
            sumapares += a[i];
        }
    }
    printf("la sumatoria de los numeros en posiciones pares es de: %d", sumapares);
    
    return 0;
}