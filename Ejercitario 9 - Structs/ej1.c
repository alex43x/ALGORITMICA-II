/*Escribir un programa que permita hacer las operaciones de suma, resta,
multiplicación y división de números complejos. El tipo complejo ha de definirse
como una estructura.*/

#include <stdio.h>
#include <math.h>
struct complejo
{
    int real;
    int imag;
} com1, com2, com3;

int suma(struct complejo *a, struct complejo *b)
{
    printf("Suma: %d+%di", a->real + b->real, a->imag + b->imag);
}
int resta(struct complejo *a, struct complejo *b)
{
    printf("Resta: %d+%di", a->real - b->real, a->imag - b->imag);
}
int multiplicacion(struct complejo *a, struct complejo *b)
{
    printf("Multiplicación: %d+%di", a->real * b->real + a->imag * b->imag, a->real * b->imag + a->imag * b->real);
}
int division(struct complejo *a, struct complejo *b)
{
    printf("División: %f+%fi", (((a->real * b->real) + (a->imag * b->imag)) / (pow(b->real, 2) + pow(b->imag, 2))), (((a->imag * b->real) - (a->real * b->imag)) / (pow(b->real, 2) + pow(b->imag, 2))));
}

int main()
{
    printf("Ingrese parte real");
    scanf("%d", &com1.real);

    printf("Ingrese parte imaginaria");
    scanf("%d", &com1.imag);

    printf("Ingrese parte real");
    scanf("%d", &com2.real);

    printf("Ingrese parte imaginaria");
    scanf("%d", &com2.imag);

    printf(" %d %di %d %di", com1.real, com1.imag, com2.real, com2.imag);

    suma(&com1, &com2);
    resta(&com1, &com2);
    multiplicacion(&com1, &com2);
    division(&com1, &com2);
    return 0;
}