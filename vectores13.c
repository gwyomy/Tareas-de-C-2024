/*Se tiene en memoria un vector V de N elementos. Hacer un algoritmo que permita encontrar e imprimir
la mediana. Mediana es el elemento del medio o central, si es impar. Si N es par, la mediana es la
suma de los dos centrales dividido dos.*/

#include<stdio.h>
int main(){
    int n, medianaimpar = 0, medianapar = 0, medianaparmas1 = 0;
    float mp = 0;
    printf("Introduce la lomgitud del vector: ");
    scanf("%d", &n);
    int v[n];
    
    for (int i = 0; i < n; i++)
    {
        printf("Introduce el elemento nro '%d' del vector: ", i);
        scanf("%d", &v[i]);
    }

       for (int i = 0; i < n; i++) /*----------------> se encarga de ordenar los datos en forma de escalera, en este codigo al menos (al fin hice bien esta cosa, me di cuenta que el anterior tenia varios problemas)*/
    {
        for (int j = 0; j < n; j++)
        {
            if (v[j] > v[j+1])
            {
                int aux = v[j+1];
                v[j+1] = v[j];
                v[j] = aux;
            }
            
        }
        
    }

    printf(" la mediana es:");
    for (int i = 0; i < n; i++)
    {
        if (n%2 == 1) /*caso impar, la mediana se obtiene dividiendo la longitud del vector total del vector y comparando posiciones*/
        {
            medianaimpar = n/2;
            if (medianaimpar == i) /*en caso de que devuelva 1, es impar*/
            {
                printf("%d", v[i]);
            }
        }
        if (n%2 == 0)/*<----en caso par los dos componentes centrasles se suman y se dividen entre dos*/
        {
            medianapar = n/2;/*segun yo estoy relacionando las posiciones, de alguna manera funciona bien(probe sacando esta linea y no funco, asi que lo hice bien ;D)*/
            if (medianapar == i )
            {
                medianapar = v[i-1];/*----------> componente central 1*/
                printf("\n%d", medianapar);
                medianaparmas1 = v[i]; /*componente central 2*/
                printf("\n%d", medianaparmas1);
                mp = (float)(medianapar+medianaparmas1)/2; /*basicamente se suman y se dividen entre 2 para sacar la 'mp = mediana par'*/
                printf("\n%.6f", mp);
            }
            
        }
        
    }


    return 0;
}