/*Ingresar una cadena de caracteres y contar cada vocal con notación
de punteros. Imprimir la vocal y la cantidad.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char cad[50] = {};
    int c = 0;
    puts("Ingrese una cadena: ");
    gets(cad);
    puts(cad);
    
    for (int i = 0; *(cad + i) != '\0'; i++)
    {
        if (toupper(*(cad + i)) == ('A') || toupper(*(cad + i)) == ('E') || toupper(*(cad + i)) == ('I') || toupper(*(cad + i)) == ('O') || toupper(*(cad + i)) == ('U'))
        {
            c++;
        }
    }
    printf("vocales: %d",c);
    return 0;
}