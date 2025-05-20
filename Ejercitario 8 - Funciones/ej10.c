/*Escribir una función en C que reciba un número N y muestre los primeros N
números capicúa. Para ello, deberá emplear la función del ejercicio anterior.*/

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

int mostrarNumeros(int N, int cant){
    int inv=0;
    for (int i = 0; i < cant; i++)
    {
        inv = inv * 10 + N % 10;
        N=N/10;
    }
    printf("%d \n",inv);
    return inv;
}

int capicua(int N,int cant){
    if (N==invertir(N)){
        printf("Es capicua\n");
        mostrarNumeros(N,cant);
        return 1;
    }else{
        printf("No es capicua");
        return 0;
    }
}

int main(){

    capicua(24342,3);
    return 0;
}