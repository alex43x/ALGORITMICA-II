#include <stdio.h>

int main()
{
    // variables a utilizar
    int numero, contador = 1;
    char c;
    printf("Ingrese un numero entero positivo: ");
    do
    {

        while (scanf("%d", &numero) != 1)
        {
            // Se limpia el buffer
            while ((c = getchar()) != '\n' && c != EOF)
                ;
            printf("No cumple la condicion, favor ingrese un valor correcto: ");
        }
        if (numero <= 0)
        {
            printf("No es un numero positivo, ingrese un positivo: ");
        }
    } while (numero <= 0);
    printf("La secuencia de ULAM es: %d ", numero);
    while (numero != 1)
    {
        if (numero % 2 == 0)
        {
            numero = numero / 2;
        }
        else
        {
            numero = numero * 3 + 1;
        }
        printf(", %d ", numero);
        contador++;
    }
    printf("\nLa secuencia tiene %d valores.\nGracias por usar el sistema.\nAdios", contador);
}