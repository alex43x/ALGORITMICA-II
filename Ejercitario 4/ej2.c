#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int N = 0;
    printf("Ingrese un numero natural ");
    do
    {
        while (scanf("%d", &N) != 1)
        {
            printf("Ingrese un valor valido ");
            while ((N = getchar()) != '\n' && N != EOF)
                ;
        }
        if (N < 1)
        {
            printf("El nro debe ser natural ");
        }

    } while (N < 1);
    int numeros[N], AUX[N];
    for (int i = 0; i < N; i++)
    {
        numeros[i] = 1 + rand() % (100 - 1 + 1);
        AUX[i] = numeros[i];
        printf("%d\t%d\n", i, numeros[i]);
    }
    int aux = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (numeros[j] < numeros[j + 1])
            {
                aux = numeros[j + 1];
                numeros[j + 1] = numeros[j];
                numeros[j] = aux;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d\t%d\n", i, numeros[i]);
    }
    int c = 1;
    for (int i = 0; i < N - 1; i++)
    {
        if (numeros[i] == numeros[i + 1])
        {
            c++;
        }
        else
        {
            printf("%d aparece %d veces. ", numeros[i], c);
            printf("Posiciones: ");
            for (int j = 0; j < N; j++)
            {
                if (numeros[i] == AUX[j])
                {
                    printf("%d, ", j);
                }
            }
            c = 1;
            printf("\n");
        }
        
    }
    if (numeros[N-2]!=numeros[N-1])
    {
        printf("%d aparece 1 veces. ", numeros[N-1]);
        printf("Posiciones: ");
        for (int j = 0; j < N; j++)
        {
            if (numeros[N-1] == AUX[j])
            {
                printf("%d, ", j);
            }
        }
    }

    return 0;
}