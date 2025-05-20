/*Escribir una función en C que reciba dos números enteros (se puede suponer
que ambos son positivos) y devuelva el máximo común divisor (MCD) de dichos
números.*/

#include <stdio.h>

int mcd(int a, int b)
{
    int res = 0;
    if (a<b){
        b=b-a;
        a=b+a;
        b=a-b;
    }
    do
    {
        res = a % b;
        a=b;
        b=res;
    } while (res != 0);
    return a;
}

int main()
{
    int a = 15, b = 45;
    int c=mcd(a,b);
    printf("MCD: %d",c);
    return 0;
}