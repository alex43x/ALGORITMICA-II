/*Escribir una función en C que reciba un número entero N (se puede suponer
que es positivo) y que muestre en pantalla un triángulo que tenga este patrón:*/

#include <stdio.h>

int patron(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            printf("-");
        }
        for (int k = 0; k < i+1; k++)
        {
            printf("*");
        }
        for (int l = 0; l < i; l++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}

int main()
{
    int N = 5;
    patron(N);
    return 0;
}