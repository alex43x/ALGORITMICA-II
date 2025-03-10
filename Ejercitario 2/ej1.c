#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()
{
    double radio;
    printf("Ingrese el radio del círculo..");
    scanf("%lf", &radio);
    double cia;
    cia = 2 * M_PI * radio;
    double area = M_PI * pow(radio, 2);
    printf("La cia mide %.2lf y el area mide: %.2lf", area, cia);
    return 0;
}