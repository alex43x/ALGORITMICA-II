#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    char frase[100];
    int N = 0;
    puts("Ingrese frase a codificar:");
    fgets(frase,sizeof(frase),stdin);
    N = ceil(sqrt(strlen(frase)));
    int len = strlen(frase)-1;
    printf("Longitud frase: %d N:%d\n", len, N);
    char M[N][N];
    int pos = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (pos >= len)
            {
                M[i][j] = '?';
            }
            else
            {
                M[i][j] = frase[pos];
            }
            pos++;
            printf("%c\t", M[i][j]);
        }
        printf("\n");
    }
    int k = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N-i; j++)
        {
            printf("%c",M[j][j+k]);
        }
        k++;
    }
    k=1;
    for (int i = 0; i < N-1; i++)
    {
        for (int j = k; j < N; j++)
        {
            printf("%c",M[j][j-k]);
        }
        k++;
    }

    return 0;
}