#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int N, t1, t2, sum = 0;
    printf("Ingrese dimensión del array: ");
    while ((scanf("%d", &N)) != 1 || N < 1)
    {
        while ((N = getchar()) != '\n' && N != EOF)
            ;
        printf("No es un numero entero, ingrese otra vez: ");
        if (N < 1)
        {
            printf("El numero debe ser natural: ");
        }
    }
    int M[N][N];
    printf("Ingrese limite inferior : ");
    while ((scanf("%d", &t1)) != 1)
    {
        while ((t1 = getchar()) != '\n' && t1 != EOF)
            ;
        printf("No es un numero entero, ingrese otra vez: ");
    }
    printf("Ingrese limite superior: ");
    while ((scanf("%d", &t2)) != 1 || t2 < t1)
    {
        while ((t2 = getchar()) != '\n' && t2 != EOF)
            ;
        printf("No es un numero entero, ingrese otra vez: ");
        if (t2 < t1)
        {
            printf("El numero debe ser mayor al limite inferior (%d) ", t1);
        }
    }
    srand(time(NULL));
    printf("Elementos de la diagonal principal: ");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            M[i][j] = t1 + rand() % (t2 - t1 + 1);
            if (i == j)
            {
                sum += M[i][j];
                printf("%d ", M[i][j]);
            }
        }
    }
    printf("\n Matriz:\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
    printf("Suma de la diagonal principal: %d",sum);

    return 0;
}