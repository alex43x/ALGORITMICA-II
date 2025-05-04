/*Escriba una función que imprima la suma de dos números enteros,
utilizar como parámetro de las funciones punteros, prototipo de la
función int suma(int*, int*).*/

#include <stdio.h>

int suma(int *a, int *b)
{
    int suma=*(a)+*(b);
    printf("Suma: %d",suma);
    return 0;
}

int main()
{
    int x, y;
    printf("Ingrese el primer valor: ");
    scanf("%d",&x);
    printf("Ingrese el segundo valor: ");
    scanf("%d",&y);
    suma(&x,&y);
    return 0;
}