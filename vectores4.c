/*leer un vectro de n componentes, hallar e imprimir el promedio de todas sus posiciones impares*/
#include<stdio.h>
int main(){
    int n, suma = 0, c = 0;
    float promedio = 0;
    printf("Ingrese la longitud del vector: ", n);
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Ingrese cada componente (nro '%d'): ", i+1);
        scanf("%d", &a[i]);
        if (i%2 == 1) /*cada que la posicion del componente deje residuo de '1', el elemento ingresado sera almacenado en la variable 'suma' y el comtador 'c' sera incrementado para su posterior divisiion*/
        {
            c++;
            suma += a[i];
        }    
    }
    promedio = (float)suma/c; /*se divide la totalidad de elemntos almacenados en suma y contador para sacar el promedio*/
    printf("El promedio de las posiciones impares del vector es: %.5f", promedio);
    return 0;
}