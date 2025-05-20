/*Escribir una función que reciba un número entero N (se puede suponer que es
positivo) y devuelva el término N de la sucesión de Fibonacci (suponiendo que
el primer término es 0 y el segundo es 1).*/

#include <stdio.h>

int fibonacci(int N){
    int f1=0,f2=1,f3=1;
    if (N==1){
        return f1;
    }else if(N==2){
        return f2;
    }else{
        for (int i = 2; i < N; i++)
        {
            f3=f1+f2;
            f1=f2;
            f2=f3;
        }
        return f3;
    }
}

int main(){
    int N=5;
    N=fibonacci(N);
    printf("Numero: %d",N);
    return 0;
}