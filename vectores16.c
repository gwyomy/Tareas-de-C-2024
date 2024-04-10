/*leer un vector b de n componentes y un nro entero a y encontrar el menor elemento del vector que sea mayor al a leido*/
#include <stdio.h>
int main() {
    int n, a, menor = -999;/*nuevamente espero que el usuario no ingrese un valor como este*/
    printf("Ingrese la longitud de B: ");
    scanf("%d", &n); 
    int b[n]; 
    printf("Introduzca un numero entero: ");
    scanf("%d", &a); 
    for (int i = 0; i < n; i++) {
        printf("Introduzca un nro para el elemento nro %d: ", i + 1);
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++) 
    {
        if (b[i] > a && (menor == -999 || b[i] < menor)) /*se compara ' si el elemento de b es mayor que a y si menor es -999 o el elemento es menor que "menor" ' se establece a aquel numero como menor*/
        {
            menor = b[i]; 
        }
    }

    if (menor != -999) /*en caso contrario a que menor sea distinto a -999 imprime lo comparado mas arriba*/
    {
        printf("El menor numero ingresado que es mayor al numero %d es: %d", a, menor);
    } else
    {
        printf("No se encontró un número en el vector B mayor que %d\n", a);
    }

    return 0;
}
