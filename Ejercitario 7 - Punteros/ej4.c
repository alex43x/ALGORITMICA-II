/*Se tiene un vector de punteros que apuntan a cadenas, Imprimir el
ultimo carácter de cada cadena. Utilizar en nombre del vector de
punteros *punteros[] como puntero para el proceso. Pueden usar
para probar el vector de punteros char *punteros [4]={"enero",
"febrero", "marzo", "abril"}. Todo con aritmética de punteros, nada
con recorrido con subíndices.*/

#include <stdio.h>

int main()
{
    char *punteros[4] = {"enero", "febrero", "marzo", "abril"};
    printf("%c \n", (*(*(punteros + 1) + 2)));

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; (*(*(punteros + i) + j)) != '\0'; j++)
        {
            if ((*(*(punteros + i) + j+1)) == '\0')
            {
                printf("%c", (*(*(punteros+i) + j )));
            }
        }
    }

    return 0;
}