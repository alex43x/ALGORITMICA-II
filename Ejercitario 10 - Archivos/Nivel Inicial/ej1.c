/*1. Escribir un programa que lea caracteres de un archivo llamado alumnos.txt si existe. Si
el archivo existe, el programa deberá contar la cantidad de líneas que tiene el archivo e
imprimirla en pantalla.*/

#include <stdio.h>

int main()
{
    FILE *arch;
    arch = fopen("C://Users//azufr//Documents//ALGORITMICA//Ejercitario 10 - Archivos//Nivel Inicial//alumnos.txt", "r");
    char c;
    int cont = 0;
    if (arch!=NULL)
    {
        while (feof(arch) == 0)
        {
            c = fgetc(arch);
            if (c == '\n')
            {
                cont++;
            }
        }
        fclose(arch);
        printf("El archivo tiene %d lineas", cont+1);
    }
    else
    {
        printf("El archivo no existe");
    }

    return 0;
}