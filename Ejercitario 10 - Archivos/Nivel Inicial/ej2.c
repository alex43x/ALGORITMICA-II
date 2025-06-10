/*Escribir un programa que pida al usuario el nombre del archivo a leer. El programa
deberá imprimir en pantalla la cantidad de vocales que tiene el archivo. Tener en
cuenta las vocales con acento.*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int esVocal(char c)
{
    c = tolower((unsigned char)c);
    return (c == 'a' || c == 'á' || c == 'e' || c == 'é' ||
            c == 'i' || c == 'í' || c == 'o' || c == 'ó' ||
            c == 'u' || c == 'ú');
}

int main()
{
    FILE *f1;
    char archname[100];
    char c;
    int counter = 0;

    printf("Ingrese el nombre del archivo para abrir: ");
    fgets(archname, sizeof(archname), stdin);
    archname[strcspn(archname,'\n')] = 0; // Eliminar salto de línea

    f1 = fopen(archname, "r");
    if (f1 != NULL)
    {
        while ((c = fgetc(f1)) != EOF)
        {
            if (esVocal(c))
            {
                counter++;
            }
        }
        fclose(f1);
        printf("\nEn el archivo hay %d vocales.\n", counter);
    }
    else
    {
        printf("\nNo se encuentra el archivo\n");
    }

    return 0;
}
