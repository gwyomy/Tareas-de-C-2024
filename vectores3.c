/*leer un vector de 20 comps. multiplicar sus elementos y al final imprimir el resuktado*/
#include<stdio.h>
int main(){
    int a[20], multiplicacion = 1;
    for (int i = 0; i < 20; i++)
    {
        printf("Introduzca el elemento nro '%d': ", i+1);
        scanf("%d", &a[i]);
        multiplicacion *= a[i]; /*se multiplica cada componente almacenado en 'multiplicacion' por cada valor que el usuario ingresa*/

    }
    
    printf("Multiplicacion: %d", multiplicacion);

    return 0;
}