#include <stdio.h>

int main()
{
    int a, b, c, aux;
    printf("Ingrese los numeros: ");
    scanf("%d \n", &a);
    scanf("%d \n", &b);
    scanf("%d", &c);
    if (a > b)
    {
        aux = b;
        b = a;
        a = aux;
    }
    if (c < a)
    {
        aux = c;
        c = b;
        b = a;
        a = aux;
    }
    if (c < b)
    {
        aux = c;
        c = b;
        b = aux;
    }
    printf("Numeros ordenados: %d %d %d", a, b, c);

    return 0;
}