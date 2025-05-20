/*Escribir una función en C que reciba un número entero x y retorne el número
que resulta de invertir el orden de las cifras de x.*/

#include <stdio.h>

int invertir(int N)
{
    int inv = 0;

    while (N > 0)
    {
        printf("N: %d, inv: %d \n",N,inv);
        inv = inv * 10 + N % 10;
        N=N/10;
    }
    return inv;
}


int capicua(int N){
    if (N==invertir(N)){
        printf("Es capicua");

        return 1;
    }else{
        printf("No es capicua");
        return 0;
    }
}

int main()
{
    int N = 456;
    printf("Invertido: %d",invertir(N));
    return 0;
}