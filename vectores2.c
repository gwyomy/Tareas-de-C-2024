/*leer un vector de 30 comps, hallar el promedio e imprimir el resultado*/
#include<stdio.h>
int main(){
    int A[30], suma = 0;
    float promedio = 0;
    for (int i = 0; i < 30; i++)
    {
        printf("Introduzca cada elemento del vector (vector nro '%d'): ", i+1);
        scanf("%d", &A[i]);
        suma += A[i];/*Se reliza la respectiva suma de cada elemento, para luego dividirla con 30 y sacar el promedio*/
    }

    promedio = (float)suma/30;
    printf("El promedio es: %.5f", promedio);

    return 0;
}