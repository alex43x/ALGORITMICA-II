#include <stdio.h>
#include <string.h>

int main()
{
    int voc = 0, con = 0, may = 0, min = 0, num = 0, esp = 0, blk = 0, tot = 0;
    char cadena[100];
    puts("Ingrese cadena: ");
    gets(cadena);
    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] >= 'a' && cadena[i] <= 'z')
        {
            min++;
        }
        else if (cadena[i] >= 'A' && cadena[i] <= 'Z')
        {
            may++;
        }
        else if (cadena[i] >= '0' && cadena[i] <= '9')
        {
            num++;
        }
        else if (cadena[i] == ' ')
        {
            blk++;
        }
        else if ((cadena[i] >= '!' && cadena[i] <= '/') || (cadena[i] >= ':' && cadena[i] <= '@') || (cadena[i] >= '[' && cadena[i] <= '`') || (cadena[i] >= '{' && cadena[i] <= '~'))
        {
            esp++;
        }

        if ((cadena[i] | 32) == 'a' || (cadena[i] | 32) == 'e' || (cadena[i] | 32) == 'i' || (cadena[i] | 32) == 'o' || (cadena[i] | 32) == 'u')
        {
            voc++;
        }
        else if (((cadena[i] | 32) > 'a' && (cadena[i] | 32) <= 'z') && ((cadena[i] | 32) != 'a' || (cadena[i] | 32) != 'e' || (cadena[i] | 32) != 'i' || (cadena[i] | 32) != 'o' || (cadena[i] | 32) != 'u'))
        {
            con++;
        }
        tot++;
    }
    printf("Mayusculas: %d \n", may);
    printf("Minusculas: %d \n", min);
    printf("Digitos: %d \n", num);
    printf("Car. Especiales: %d \n", esp);
    printf("Espacios en blanco: %d \n", blk);
    printf("Vocales: %d \n", voc);
    printf("Consonantes: %d \n", con);
    printf("Total: %d \n", tot);

    return 0;
}