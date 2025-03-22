#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int N,t1,t2;
    printf("Ingrese dimensión del array: ");
    while((scanf("%d",&N))!=1 || N<1){
        while((N=getchar())!='\n' && N!=EOF)
        ;
        printf("El valor debe ser un nro natural:");
    }
    int M[N][N];
    printf("Ingrese limite inferior: ");
    while((scanf("%d",&t1))!=1 ){
        while((t1=getchar())!='\n' && t1!=EOF)
        ;
        printf("El valor debe ser un nro entero:");
    }
    printf("Ingrese limite superior: ");
    while((scanf("%d",&t2))!=1||t1>t2){
        while((t2=getchar())!='\n' && N!=EOF)
        ;
        printf("El valor debe ser un nro entero:");
        if(t1>t2){
            printf("El limite superior debe ser mayor que el limite inferior");
        }
    }
    srand(time(NULL));
    printf("Matriz Original\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(j<i){
                M[i][j]=t1+rand()%(t2-t1+1);
            }else{
                M[i][j]=0;
            }
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
    printf("Matriz Simetrica\n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if(j>i){
                M[i][j]=M[j][i];
            }else{
                M[i][j]=0;
            }
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
}