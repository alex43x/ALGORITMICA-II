#include <stdio.h>

int main(){
    double a,b,c,d,e;
    printf("Ingrese los valores:");
    scanf("%lf %lf %lf %lf %lf", &a,&b,&c,&d,&e);
    double suma=a+b+c+d+e;
    double promedio=suma/5;
    printf("La suma de los valores es %f, y el promedio es %f", suma,promedio);
    return 0;
}