#include <stdio.h>
int main()
{
    int N = 0, max = 0, min = 6, suma = 0;

    printf("Ingrese un numero natural: ");
    do
    {
        while (scanf("%d", &N) != 1)
        {
            while ((N = getchar()) != '\n' && N!= EOF)
                ;
            printf("No cumple la condicion, favor ingrese un valor correcto: ");
        }
        if (N <= 0)
        {
            printf("No es un numero positivo, ingrese un positivo: ");
        }
    } while (N <= 0);
    int notas[N];
    for (int i = 0; i < N; i++)
    {
        printf("Ingrese una nota del 1 al 5: ");
        do
        {
            while (scanf("%d", &notas[i]) != 1)
            {
                while ((notas[i] = getchar()) != '\n' && notas[i] != EOF)
                    ;
                printf("Ingrese un valor valido \n");
            }
            if (notas[i] < 1 || notas[i] > 5)
            {
                printf("Debe ingresar una nota del 1 al 5 ");
            }

        } while (notas[i] < 1 || notas[i] > 5);
        suma += notas[i];
        if (max < notas[i])
        {
            max = notas[i];
        }
        if (min > notas[i])
        {
            min = notas[i];
        }
    }
    printf("ID\tNota\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\t%d\n", i, notas[i]);
    }
    float a = suma, b = N;
    printf(" Suma %f", a);

    double prom = a / b;
    printf("Nota mas alta %d \n Nota mas baja %d \n Promedio %.2lf \n", max, min, prom);
    return 0;
}