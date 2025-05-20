/*Escribir una función en C que reciba un número entero N (se puede suponer
que es positivo) y retorne la cantidad de dígitos que posee.*/

#include <stdio.h>
int contarDigitos(int *N){
    int c=0;
    while (*N>0)
    {
        *N=*N/10;
        c++;
    }
    printf("El nro tiene %d digitos.", c);
    return c;
}

int main(){
    int N=0;
    printf("Ingrese un nro entero: ");
    scanf("%d",&N);
    contarDigitos(&N);
    return 0;
}