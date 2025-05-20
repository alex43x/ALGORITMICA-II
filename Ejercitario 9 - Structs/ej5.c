/*Dada una lista que contiene los nombres (en el formato “Apellido - Nombre”) de
los alumnos y sus notas, calcular el promedio de notas de los alumnos con
apellidos de A hasta N (o a hasta n). Mostrar también el nombre del alumno con
la mejor nota (o de los alumnos, si se da el caso).*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char apellido[20];
    float nota;
} alumno;

void registrar(alumno *alumnos, int N)
{
    for (int i = 0; i < N; i++)
    {
        printf("Ingrese apellido y nombre del alumno: \n");
        fgets((alumnos + i)->apellido, sizeof((alumnos + i)->apellido), stdin);
        char *nl = strchr((alumnos + i)->apellido, '\n');
        if (nl)
            *nl = '\0';
        printf("Ingrese nota del alumno: \n");
        scanf("%f", &(alumnos + i)->nota);
        getchar();
    }
}

float promedio(alumno *alumnos, int cant, char stop)
{
    int c = 0,max=0;
    float sum = 0;
    for (int i = 0; i < cant; i++)
    {
        if ((alumnos + i)->apellido[0] <= stop)
        {
            printf("Alumno: %s\n", ((alumnos + i))->apellido);
            c++;
            sum += (alumnos + i)->nota;
        }
        if((alumnos+i)->nota>max){
            max=(alumnos+i)->nota;
        }
    }
    for (int i = 0; i < cant; i++)
    {
        if(max==(alumnos+i)->nota){
            printf("Alumno max: %s\n",((alumnos+i)->apellido));
        }
    }
    
    return sum / c;
}

int main()
{
    int N=4;
    alumno alumnos[N];
    registrar(alumnos, N);
    float prom = promedio(alumnos, N, 'c');
    printf("Promedio: %.2f\n", prom);

    return 0;
}