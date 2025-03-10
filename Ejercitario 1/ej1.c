#include <stdio.h>

int main()
{
    // definimos las variables a utilizar
    double a, b;
    printf("Ingrese el primer numero: ");
    scanf("%lf", &a);
    printf("Ingrese el segundo numero: ");
    scanf("%lf", &b);
    double suma;
    suma = a + b;
    double resta = a - b;
    double multiplicacion = a * b;
    double division = a / b;
    printf("Los numeros cargados son %.2lf y %.2lf\nLa suma es %.2lf\nLa resta es %.2lf\nLa multiplicacion es %.2lf\nLa division es %.2lf\n", a, b, suma, resta, multiplicacion, division);
    printf("Gracias por utilizar el sistema.");
    return 0;
}