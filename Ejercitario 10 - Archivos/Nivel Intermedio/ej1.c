/*1. (Usado en Lenguaje C) Escribir un programa que declare la siguiente estructura
struct alumno
{
char nombre[25];
char apellido[25];
int nro_documento;
int porcentaje_primer_parcial;
int porcentaje_segundo_parcial;
};
El programa deberá leer los datos del archivo alumnos.txt y cargarlos en un vector de
alumnos. Los datos de un alumno se encuentran en cada fila del archivo. Una vez
finalizada la carga se deberá imprimir todos los datos del vector.*/

#include <stdio.h>

typedef struct
{
    char nombre[25];
    char apellido[25];
    int nro_documento;
    int porcentaje_primer_parcial;
    int porcentaje_segundo_parcial;
} alumno;

int main()
{
    alumno Alumnos[15];
    FILE *fp;
    fp = fopen("alumnos.txt", "r");
    int i = 0;
    if (fp != NULL)
    {

        while (fscanf(fp, "%s %s %d %d %d",
                      Alumnos[i].nombre,
                      Alumnos[i].apellido,
                      &Alumnos[i].nro_documento,
                      &Alumnos[i].porcentaje_primer_parcial,
                      &Alumnos[i].porcentaje_segundo_parcial) == 5)
        {
            i++;
        }

        fclose(fp);
        for (int j = 0; j < i; j++)
        {
            printf("Alumno %d:\n", j + 1);
            printf("Nombre: %s\n", Alumnos[j].nombre);
            printf("Apellido: %s\n", Alumnos[j].apellido);
            printf("CI: %d\n", Alumnos[j].nro_documento);
            printf("Parcial 1: %d%%\n", Alumnos[j].porcentaje_primer_parcial);
            printf("Parcial 2: %d%%\n\n", Alumnos[j].porcentaje_segundo_parcial);
        }
    }
    else
    {
        printf("No se ha enontrado el archivo");
    }

    return 0;
}
