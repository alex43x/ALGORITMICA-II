#include <stdio.h>
#include <math.h>

int main(){
    double x1,x2,y1,y2;
    printf("Ingrese coordenadas del primer punto: ");
    scanf("%lf %lf", &x1, &y1);
    printf("Ingrese coordenadas del segundo punto: ");
    scanf("%lf %lf", &x2, &y2);
    printf("La distancia entre ambos puntos es de %.2lf", sqrt(pow((x1-x2),2)+pow((y1-y2),2)));
    return 0;
}