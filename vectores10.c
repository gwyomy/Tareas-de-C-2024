//Hacer un algoritmo que permita contar los elementos del vector que sean multiplos de 3 y 5. Tambien se desea obtener el promedio de los elementos ubicados en posiciones impares 
#include<stdio.h>
int main(){
    int l, multiplos3 = 0, multiplos5 = 0, sumaimpares = 0, cantidadimpares = 0, multiplos3y5 = 0;
    float promedioimpares = 0;
    printf("Escribe la longitud del vector: ");
    scanf("%d", &l);
    int a[l];
    for (int i = 0; i < l; i++)
    {
        printf("Escribe el elemento del vector: ");
        scanf("%d", &a[i]);

        if (a[i] % 3 == 0 && a[i] % 5 != 0) /*si es multiplo de tres pero no de cinco se almacena en multiplos3*/
        {
            multiplos3++;
        }
        if (a[i] % 3 == 0 && a[i] % 5 == 0)/*si es multiplo de tres y cinco a la vez se almacena en multiplos3y5*/
        {
            multiplos3y5++;
        }
        if (a[i] % 3 != 0 && a[i] % 5 == 0)/*si es multiplo de cinco y no de tres se almacena en multiplos5*/
        {
            multiplos5++;
        }
        if (i%2 == 1) /*si la posicion es impar ademas de almacenarse en sumaimpares tambien aumenta el comtador, para despues dividirse entre ambos y dar a conocer el promedio de nros en posiciones impares*/
        {
            cantidadimpares++;
            sumaimpares += a[i];
        }
    }
    promedioimpares = (float)sumaimpares/cantidadimpares;
    printf("Cantidad de multiplos de 3:%d \tCantidad de multiplos de 5:%d \tCantidad de multiplos de 3 y 5: %d", multiplos3, multiplos5, multiplos3y5);
    printf("\nEl promedio de los numeros impares es de: %.3f", promedioimpares);
    return 0;
}