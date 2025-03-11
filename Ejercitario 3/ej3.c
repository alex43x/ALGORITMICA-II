#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    int a=0,b=0,c=0,sum=13;
    while(sum>12){
        printf("Ingrese valor a superar o igualar (Maximo es 12): ");
        scanf("%d",&sum);
    }
    while(a+b<sum){
        a=1+rand()%(6-1+1);
        b=1+rand()%(6-1+1);
        c++;
        printf("Valores: a: %d, b: %d \n",a,b);
    }
    printf("Numero de intentos: %d", c);
    return 0;
}