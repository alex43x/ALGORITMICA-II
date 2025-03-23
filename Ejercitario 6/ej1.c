#include <stdio.h>
#include <string.h>

int esPalindromo(char str[])
{
    int inicio = 0;
    int fin = strlen(str) - 1;
    while (inicio < fin)
    {
        while (str[inicio] == ' ')inicio++;
        while (str[fin] == ' ')fin--;
        if ((str[inicio] | 32) != (str[fin]| 32))
        {
            return 0;
        }
        inicio++;
        fin--;
    }
    return 1;
}

int main()
{
    // Declaramos la cadena a utilizar
    char palabra[100];

    // Leemos la palabra
    printf("Ingrese una frase: ");
    fgets(palabra, sizeof(palabra), stdin);

    // borramos el caracter \n de la cadena obtenida
    palabra[strcspn(palabra, "\n")] = 0;

    if (esPalindromo(palabra))
    {
        printf("Es palindromo");
    }
    else
    {
        printf("No es palindromo");
    }
    return 0;
}