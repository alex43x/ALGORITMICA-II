/*Escribir una función en C que reciba un número N y retorne 1 si el mismo es
palíndromo (o capicúa), y 0 en caso contrario. Para ello, se debe emplear la
función del ejercicio anterior.*/

#include <stdio.h>

int invertir(int N)
{
    int inv = 0;

    while (N > 0)
    {
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

int main (){
    capicua(343);

    return 0;
}