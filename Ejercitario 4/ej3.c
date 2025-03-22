#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int validate(int X){
    do{
        while(scanf("%d",&X)!=1){
            printf("Ingrese un valor valido ");
            while((X=getchar())!='\n' && X!=EOF)
            ;
        }
        if (X<1)
        {
            printf("Debe ingresar un numero natural ");
        }
        
    }while(X<1);
    return X;
}
int sort(int V[], int N){
    int aux=0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; i < N-j-1; j++)
        {
            if(V[j]>V[j+1]){
                aux=V[j+1];
                V[j+1]=V[j];
                V[j]=aux;
            }
        }
    }
    return V;
}
int checkEqual(int a,int b){
    if(a==b){
        printf("Coinciden las posiciones\n");
    }else{
        printf("No coinciden las posiciones\n");
    }
    return 0;
}
int main(){
    srand(time(NULL));
    int N=0,M=0;
    printf("Ingrese un numero natural para dimension del vector: ");
    N=validate(N);
    printf("Ingrese un numero natural para rango de nros: ");
    M=validate(M);
    int min=M,max=0,pmin1,pmax1,pmin2,pmax2;
    int num[N];
    printf("Original\n");
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
    sort(num,N);
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
    checkEqual(pmax1,pmax2);
    printf("Valor menor: %d. Posicion inicial: %d. Posicion final: %d \n",min,pmin1,pmin2);
    checkEqual(pmin1,pmin2);
    
    return 0;
}