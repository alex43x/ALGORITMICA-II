// Generar aleatoriamente un vector de N elementos (N validar que
// sea natural). Imprimir el vector resultante con notación de punteros.
// Luego ordene de manera ascendente y descendente utilizando
// funciones con paso por referencia e imprima los resultados
// ordenados.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ordenar_asc(int *V, int N)
{
    int temp = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if (*(V + j) > *(V + j + 1))
            {
                temp = *(V + j + 1);
                *(V + j + 1) = *(V + j);
                *(V + j) = temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d, ", *(V + i));
    }
    return 0;
}

int ordenar_desc(int *V, int N)
{
    int temp = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            if (*(V + j) < *(V + j + 1))
            {
                temp = *(V + j + 1);
                *(V + j + 1) = *(V + j);
                *(V + j) = temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d, ", *(V + i));
    }
    return 0;
}

int main()
{
    srand(time(NULL));
    int N = 0;
    do
    {
        printf("Igrese dimensión del vector: ");

        while ((scanf("%d", &N)) != 1)
        {
            printf("El valor debe ser un nro natural..");
            while ((N = getchar()) != '\n' && N != EOF)
                ;
        }
    } while (N < 1);

    int V[N];
    for (int i = 0; i < N; i++)
    {
        V[i] = 1 + rand() % (10 - 1 + 1);
        printf("%p \n", &(V[i]));
    }
    for (int i = 0; i < N; i++)
    {
        printf("%d, ", (V[i]));
    }

    printf("\n");
    ordenar_asc(V, N);
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d, ", (V[i]));
    }
    printf("\n");
    ordenar_desc(V, N);
    printf("\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d, ", (V[i]));
    }

    return 0;
}