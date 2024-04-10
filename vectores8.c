/*hacer un algoritmo para crear un vector v con todas las edades de los alumnos del quinto curso de informatica y luego calcular el promedio de las edadees*/
#include<stdio.h>
int main(){
    int cc, sumaedades = 0; 
    float promedio = 0;
    printf("Ingresa la cantidad de alumnos que conforman el curso");
    scanf("%d", &cc);
    int v[cc];

    for (int i = 0; i < cc; i++)
    {
        printf("Introduce la edad del alumno nro '%d': ", i+1);
        scanf("%d", &v[i]);
        sumaedades += v[i];/*se almacennan las edades y se incrementa la variable con cada iteracion*/
    }
    promedio = (float)sumaedades/cc;/*se calcula el promedio con la suma total de las edades entre la cantidad de alumnos que conforman el curso*/
    printf("El promedio de las edadeds es: %.3f", promedio);

    return 0;
}