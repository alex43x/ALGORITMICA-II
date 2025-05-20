/*Un punto en el plano se puede representar mediante una estructura con dos
campos. Escribir un programa que realice las siguientes operaciones en el
plano:
a. Dados dos puntos, calcular la distancia entre ellos.
b. Dados dos puntos determinar la ecuación de la recta que pasa por ellos.
c. Dados tres puntos, que representan los vértices de un triángulo, calcular
su área.*/

#include <stdio.h>
#include <math.h>

typedef struct
{
    float x;
    float y;
} coord;

float distancia(coord p1, coord p2)
{
    float d = sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
    printf("Distancia %.2f\n", d);
    return d;
}
// y-yo=m(x-xo)--->mx-y-mxo+yo=0

void recta(coord p1, coord p2)
{
    float m = (p1.y - p2.y) / (p1.x - p2.x);
    float b = (-p1.x * m) + p1.y;
    printf("Ecuacion de la recta es: %.2fx-y+%.2f=0\n", m, b);
}

float area(coord p1, coord p2, coord p3)
{
    float a = abs(p1.x * (p2.y - p3.y) - p1.y * (p2.x - p3.x));
    printf("Area: %.2f \n", a);
    return a;
}

int main()
{
    coord p1 = {0, 3};
    coord p2 = {4, 0};
    coord p3 = {0, 0};
    distancia(p1, p2);
    recta(p1, p2);
    area(p1, p2, p3);
    return 0;
}
