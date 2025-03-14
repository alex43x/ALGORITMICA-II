#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int N,M;
    printf("Ingrese un numero natural para dimension del vector: ");
    do{
        while(scanf("%d",&N)!=1){
            printf("Ingrese un valor valido ");
            while((N=getchar())!='\n' && N!=EOF)
            ;
        }
        if (N<1)
        {
            printf("Debe ingresar un numero natural ");
        }
        
    }while(N<1);
    printf("Ingrese un numero natural para rango de nros: ");
    do{
        while(scanf("%d",&M)!=1){
            printf("Ingrese un valor valido ");
            while((M=getchar())!='\n' && M!=EOF)
            ;
        }
        if (M<1)
        {
            printf("Debe ingresar un numero natural ");
        }
        
    }while(M<1);
    int min=M,max=0,pmin1,pmax1,pmin2,pmax2;
    int num[N];
    for (int i = 0; i < N; i++)
    {
        num[i]=1+rand()%(M);
        if (num[i]>max)
        {
            max=num[i];
            pmax1=i;
        }
        if (num[i]<min){
            min=num[i];
            pmin1=i;
        }
        printf("%d\t%d\n",i,num[i]);
    }
    int aux=0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; i < N-j-1; j++)
        {
            if(num[j]>num[j+1]){
                aux=num[j+1];
                num[j+1]=num[j];
                num[j]=aux;
            }
        }
    }
    printf("Ordenado\n");
    for (int i = 0; i < N; i++)
    {
        printf("%d\t%d\n",i,num[i]);
    }
    for (int i = 0; i < N; i++)
    {
        if(num[i]==min){
            pmin2=i;
        }
        if (num[i]==max)
        {
            pmax2=i;
        }
        
    }
    printf("Valor mayor: %d. Posicion inicial: %d. Posicion final: %d \n",max,pmax1,pmax2);
    if (pmax1==pmax2)
    {
        printf("Coinciden las posiciones\n");
    }else{
        printf("No coinciden las posiciones\n");
    }
    printf("Valor menor: %d. Posicion inicial: %d. Posicion final: %d \n",min,pmin1,pmin2);
    if (pmin1==pmin2)
    {
        printf("Coinciden las posiciones\n");
    }else{
        printf("No coinciden las posiciones\n");
    }
    
    

    return 0;
}