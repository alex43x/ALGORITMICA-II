/*Escribir una función en C que se encargue del proceso de validación de un
número entero y positivo (que se ingresa por teclado). Es decir, dentro de la
función se debe solicitar el ingreso de un número tantas veces como sea
necesario. La función debe retornar el número que cumpla con las condiciones
mencionadas.*/

#include <stdio.h>

int validar(int *N)
{
    do
    {
        printf("Ingrese un nro natural");
        while ((scanf("%d", N)) != 1)
        {
            while ((*N = getchar()) != '\n' && *N != EOF)
                ;
            printf("Debes ingresar un nro natural \n");
        }

    } while (*N < 1);
    return *N;
}

int main()
{
    int N = 0;
    validar(&N);

    printf("El valor de N es: %d\n", N);
    return 0;
}