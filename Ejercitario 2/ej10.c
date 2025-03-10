#include <stdio.h>
#include <math.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
int main()
{
    int opt;
    printf("MENU\n");
    printf("1-Calculo de Area de Triangulo \n");
    printf("2-Calculo de Area de Circulo \n");
    printf("3-Calculo de Area de Cuadrado \n");
    printf("Elija una opcion: ");
    scanf("%d", &opt);
    if (opt == 1)
    {
        double base, altura;
        printf("Ingrese base y altura del triangulo: ");
        scanf("%lf %lf", &base, &altura);
        printf("Area: %.2lf", base*altura/2);
    }
    else if (opt == 2)
    {
        double radio;
        printf("Ingrese radio del circulo: ");
        scanf("%lf", &radio);
        printf("Area: %.2lf", M_PI*pow(radio,2));
    }
    else
    {
        double lado;
        printf("Ingrese lado del cuadrado: ");
        scanf("%lf", &lado);
        printf("Area: %.2lf", pow(lado,2));
    }

    return 0;
}