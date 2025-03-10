#include <stdio.h>

int main()
{
    double a, b, c;
    printf("Ingrese el primer nro ");
    scanf("%lf", &a);
    printf("Ingrese el segundo nro ");
    scanf("%lf", &b);
    printf("Ingrese el tercer nro ");
    scanf("%lf", &c);
    int suma = a + b + c;
    double promedio = (a+b+c) / 3;
    int producto = a * b * c;
    printf("Suma de los tres nros: %d \n", suma);
    printf("Promedio %.2lf \n", promedio);
    printf("Producto: %d", producto);

    return 0;
}