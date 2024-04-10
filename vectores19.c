//escribir un programa que lea un vector de 10 elementos, debera imprimir el mismo vector por pantalla, pero invertido
#include<stdio.h>
int main() {
    int a[10], aperoinvertida[10];
    for (int i = 0; i < 10; i++) 
    {
        printf("Ingresa los elementos de P, componente nro '%d' : ", i + 1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        aperoinvertida[9-i] = a[i]; //a se guarda en 'aperoinvertido' y este resta un lugar a su posicion con cada iteracion para guardar los datos nuevamente
    }

    printf("\tEl vector invertido es: ");
    for (int i = 0; i < 10; i++) /*basicamente esto es para imprimirlo en forma de 'tablita'*/
    {
        printf("\n----------> %d ", aperoinvertida[i]);
    }
    return 0;
}
