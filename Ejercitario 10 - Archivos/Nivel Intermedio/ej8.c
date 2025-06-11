/*El centro de salud de la ciudad de San Bernardino cuenta con datos históricos de las
consultas realizadas en dicho centro de los últimos 3 años. El director de dicho centro
está necesitando determinar el porcentaje de consultas de niños y adultos con el fin
de optimizar la compra de medicamentos en los próximos años. Los datos dentro del
archivo tienen el siguiente formato:
año_consulta, tipo_paciente, requerió_medicamento
donde
año_consulta: un numérico que indica el año en el cual se realizó la consulta.
Tipo_paciente: N, niños; A, adultos.
Requirió medicamento: S, sí; N, no.
Escribir un programa que genere un informe con el siguiente formato:
**** INFORME DE CONSULTAS MÉDICAS ****
Cantidad consulta adultos: xx
Cantidad consulta niños: xx
Año con más consultas: xxxx*/

#include <stdio.h>
typedef struct
{
    int year;
    int cant;
} year;

int search_year(year *years, int year, int cant)
{
    for (int i = 0; i < cant; i++)
    {
        if (years[i].year == year)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    FILE *fp1, *fp2;
    year years[20];
    int cant = 0, max = 0, cad = 0, cni = 0, year = 0, pos = 0;
    char tipo, med;

    fp1 = fopen("consultas.txt", "r");
    fp2 = fopen("informe.txt", "w");

    if (fp1 != NULL && fp2 != NULL)
    {
        while ((fscanf(fp1, "%d %c %c", &year, &tipo, &med)) == 3)
        {
            pos = search_year(years, year, cant);
            if (pos == -1)
            {
                years[cant].year = year;
                years[cant].cant += 1;
                cant++;
            }
            else
            {
                years[pos].cant += 1;
                if (years[pos].cant > max)
                {
                    max = years[pos].cant;
                }
            }
            if (tipo == 'A')
            {
                cad++;
            }
            else
            {
                cni++;
            }
        }
        for (int i = 0; i < cant; i++)
        {
            if(max==years[i].cant){
                year=years[i].year;
            }
        }
        fprintf(fp2,"**** INFORME DE CONSULTAS MÉDICAS ****\nCantidad consulta adultos: %d\nCantidad consulta niños: %d\nAño con más consultas: %d",cad,cni,year);
        
    }
}