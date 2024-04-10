/*se tiene en mmemoria un vector b, cuyos elementos son solamente 0 y 1. tambien se tiene en memoria los vectores l y m , todos de tamanio n, hacer un algoritmo que permita crear un vector a tal que: 
a[x] =  l[x] si b[x] = 0
a[x] =  m[x] si b[x] = 1*/
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
    srand(time(NULL));
    int n;
    printf("Introduzca la longitud de los vectores: ");
    scanf("%d", &n);
    int b[n], l[n], m[n], a[n];
    for (int i = 0; i < n; i++)
    {
        b[i] = rand() % 2;
        printf("Ingrese el valor nro %d para M: ", i+1);
        scanf("%d", &m[i]);
        printf("Ingrese el valor nro %d para L: ", i+1);
        scanf("%d", &l[i]);

        if (b[i] == 0)/*si el numero aleatorio resulta ser 0...*/
        {
            a[i] = l[i];
        }
        if (b[i] == 1)/*de otro modo adquirira los valores que el usuario haya puesto para m*/
        {
            a[i] = m[i];
        }
        
    }
    
    printf("por lo tanto, el vector A: ");
    for (int i = 0; i < n; i++)
    {
        printf("\n:%d", a[i]);
    }
    


    return 0;
}