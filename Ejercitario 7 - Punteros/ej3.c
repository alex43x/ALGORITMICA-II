/*Dada una matriz A de tamaño M*N, obtener un vector B que
contenga los menores elementos de cada fila. Todo utilizando
aritmética de punteros.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int M,N;
    do
    {
        printf("Ingrese cantidad de filas: ");
        while ((scanf("%d",&M))!=1)
        {
            while ((M=getchar())!='\n' && M!=EOF);
        }
        
    } while (M<1);
    do
    {
        printf("Ingrese cantidad de columnas: ");
        while ((scanf("%d",&N))!=1)
        {
            while ((N=getchar())!='\n' && N!=EOF);
        }
        
    } while (N<1);

    int Mat[M][N];
    int Min[M];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            Mat[i][j]=1+rand()%(1+100-1);
            printf("%d\t ",Mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    int minf=Mat[0][0];
    int *p=&Mat[0][0];
    for (int i = 0; i < M; i++)
    {
        minf=*(p+i*N);
        for (int j = 0; j < N-1; j++)
        {
            if(minf>*(p+i*N+j+1)){
                minf=*(p+i*N+j+1);
            }
        }

        *(Min+i)=minf;
    }
    
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d\t ",Mat[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < M; i++)
    {
        printf("%d,",*(Min+i));
    }
    
    return 0;
}