/*realice un codigo que lea un arreglo de N datos y asigne a sus elementos los valores 1, 4, 9, 16......etc. */
#include <stdio.h>
int main() {
    int n;
    printf("Ingrese la longitud de su arreglo: "); 
    scanf("%d", &n);
    int arreglo[n];
    for (int i = 0; i < n; i++) 
    {
        arreglo[i] = (i+1)*(i+1);  /* Con cada iteracion, se cargan los cuadrados de los elementos asignados por el usuario (se utiliza el '+1' para asegurar que los valores del arreglo comiencen desde el 1 y no el cero)*/
    }
    for (int i = 0; i < n; i++) /*luego se imprimen con su respectivo orden, gracias a este for*/
    {
        printf("\nEl resultado de elevar el componente numero '%d' al cuadrado es de:  %d", i+1, arreglo[i]); 
    }
    return 0;  
}
/*lo mismo con este codigo*/