/*Realizar un codigo que permita al Director de Consejo Supremo Electoral encontrar el numero y porcentaje de votos obtenidos por cada uno de los 4
candidatos de la contienda electoral en relacion a los votantes que asistieron a las urnas a depositar su voto. Lea en un arreglo la intencion de voto de cada
una de las personas*/
/*Comentario personal: Es mi codigo anterior, pero voy a explicar con mis palabras, lo hice en clase igual*/
#include<stdio.h>
int main() {
    int votantes, votos[5] = {0}, voto, totaldevotos = 0;

    printf("Ingrese la cantidad de votantes: ");
    scanf("%d", &votantes); 
    for (int i = 0; i < votantes; i++) 
    {
        printf("\nIngrese la eleccion del votante (1-4): ");
        scanf("%d", &voto);

        if (voto >= 1 && voto <= 4) /*si el voto ingresado es mayor o igual a '1' y es igual o menor a '4' se incrementa el contador de votos*/
        {
            votos[voto]++; 
        } else {
            printf("\nError, ingrese terminos valipds");  //Si se ingresa un numero fuera del rango especificado, devuelve un mensaje de error
        }
    }
    
    for (int i = 1; i <= 4; i++) 
    {
        totaldevotos += votos[i];
    }

    for (int i = 1; i <= 4; i++) 
    {
        float porcentaje = (float) votos[i] / totaldevotos * 100; /*se calcula el porcentaje de los votos*/
        printf("\nCandidato %d: %d votos (%.2f%%)", i, votos[i], porcentaje);
    }

    return 0;
}

