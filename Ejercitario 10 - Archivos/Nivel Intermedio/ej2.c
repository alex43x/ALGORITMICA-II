/*Modificar la estructura del ejercicio anterior para agregar los siguientes datos del alumno:
a. promedio_ponderado
b. porcentaje_examen_final
c. calificacion
El programa además de leer los datos del ejercicio anterior, deberá leer el porcentaje del examen final que también debe encontrarse en el archivo. El programa deberá calcular el promedio ponderado (promedio de los porcentajes de los parciales). Luego deberá calcular la calificación utilizando la siguiente fórmula: promedio ponderado * 0.4 + nota final * 0.6. Para obtener la calificación se deberá utilizar la siguiente escala:
0-59% 1
60-69% 2
70-79% 3
80-93% 4
94-100% 5
El programa deberá generar el archivo calificaciones.txt con la calificación de todos los alumnos. En el archivo se debe indicar el número de documento del alumno y su calificación.*/

#include <stdio.h>

typedef struct
{
    char nombre[25];
    char apellido[25];
    int nro_documento;
    int porcentaje_primer_parcial;
    int porcentaje_segundo_parcial;
    int promedio_ponderado;
    int porcentaje_examen_final;
    int calificacion;
} alumno;

int main()
{
    alumno Alumnos[15];
    FILE *fp, *fpc;
    fp = fopen("alumnos.txt", "r");
    fpc = fopen("calificaciones.txt", "w");
    int i = 0;
    if (fp != NULL && fpc != NULL)
    {

        while (fscanf(fp, "%s %s %d %d %d %d",
                      Alumnos[i].nombre,
                      Alumnos[i].apellido,
                      &Alumnos[i].nro_documento,
                      &Alumnos[i].porcentaje_primer_parcial,
                      &Alumnos[i].porcentaje_segundo_parcial,
                      &Alumnos[i].porcentaje_examen_final) == 6)
        {
            i++;
        }

        fclose(fp);
        int nota;
        int cal;
        for (int j = 0; j < i; j++)
        {
            Alumnos[j].promedio_ponderado = (Alumnos[j].porcentaje_primer_parcial + Alumnos[j].porcentaje_segundo_parcial) / 2;
            printf("Alumno %d:\n", j + 1);
            printf("Nombre: %s\n", Alumnos[j].nombre);
            printf("Apellido: %s\n", Alumnos[j].apellido);
            printf("CI: %d\n", Alumnos[j].nro_documento);
            printf("Parcial 1: %d\n", Alumnos[j].porcentaje_primer_parcial);
            printf("Parcial 2: %d\n", Alumnos[j].porcentaje_segundo_parcial);
            printf("Final: %d\n", Alumnos[j].porcentaje_examen_final);
            printf("Parcial 2: %d\n", Alumnos[j].promedio_ponderado);
            nota = Alumnos[j].promedio_ponderado * 0.4 + Alumnos[j].porcentaje_examen_final * 0.6;
            if (nota < 60)
            {
                cal = 1;
            }
            else if (nota > 59 && nota < 70)
            {
                cal = 2;
            }
            else if (nota > 69 && nota < 80)
            {
                cal = 3;
            }
            else if (nota > 79 && nota < 94)
            {
                cal = 4;
            }
            else
            {
                cal = 5;
            }

            fprintf(fpc,"%d %d\n",Alumnos[j].nro_documento,cal);
        }
    }
    else
    {
        printf("No se ha enontrado el archivo");
    }

    return 0;
}
