/*Escribir una función que reciba un carácter, y si el mismo corresponde a una
letra minúscula, debe retornar la correspondiente letra mayúscula. En caso
contrario, debe retornar el carácter que recibe.*/

#include <stdio.h>
#include <ctype.h>

char upper(char *c)
{
    if (!isalpha(*c))
    {
        printf("Debes ingresar un caracter \n");
    }
    else
    {
        *c = toupper(*c);
    }
    return *c;
}

int main()
{
    char c = '1';
    upper(&c);

    printf("Caracter: %c", c);
    return 0;
}