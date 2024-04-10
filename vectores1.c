/*leer un vectorA de 50 componentes y un escalar x y calcular e imprimir la suma de la multiplicacion del escalar por el vector*/
#include<stdio.h>

int main(){
    int A[5], X, suma = 0;

    printf("Introduzca el valor del escalar a ser multiplicado: ");
    scanf("%d", &X);

   for (int i = 0; i < 5; i++){
    printf("Introduzca cada elemento del vector: ");
    scanf("%d", &A[i]);
    suma += A[i]*X;/*se realiza la multiplicacion de cada elemento por el escalar, el cual en cada iteracion va almacenandose en la variable suma*/
   }
    printf("El resultado es: %d", suma);


    return 0;
}
