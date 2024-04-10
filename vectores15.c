#include<stdio.h>
int main(){
    int h, j, Ia;/*utilice ia por miedo a cambiar algo indebido con ctrl d*/
    printf("Introduzca la longitud del vector p: ");
    scanf("%d", &h);
    printf("Introduzca la longitud del vector a: ");
    scanf("%d", &j);
    printf("Introduzca la longitud del vector m: ");
    scanf("%d", &Ia);
    int p[h], a[j], m[Ia];
// aqui solo se cargan los elementos de p, a y m.
    for (int i = 0; i < h; i++)
    {
        printf("Introduzca el elemento nro %d para el vector p: ", i+1);
        scanf("%d", &p[i]);
    }
    for (int i = 0; i < j; i++)
    {
        printf("Introduzca el elemento nro %d : para el vector a: ", i+1);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < Ia; i++)
    {
        printf("Introduzca el elemento nro %d : para el vector m: ", i+1);
        scanf("%d", &m[i]);
    }
    int z[h+j+Ia]; /*declarar z */
    
    for (int i = 0; i < h; i++)
    {
        z[i] = p[i]; /*los elementos de p se cargan en z*/
    }
    
    for (int i = 0; i < j; i++)
    {
        z[j+i] = a[i]; /*los elementos de a se cargan en z*/

    }
    
    for (int i = 0; i < Ia; i++)
    {
        z[j+Ia+i] = m[i]; /*finalmente los elementos de m se cargan en z*/
    }
    //aqui se imprimen los resultados
    printf("\tVector Z: ");
    printf("\t\nTamanio vector: z[%d]", h+j+Ia);

    for (int i = 0; i < h+j+Ia; i++)
    {
        printf("\t\nelemento nro '%d' de Z: %d", i+1, z[i]);
    }

    return 0;
}