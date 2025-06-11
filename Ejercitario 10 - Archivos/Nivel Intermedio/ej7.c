/*La municipalidad de Asunción cuenta con un archivo que contiene la deuda de los
clientes de diferentes años en concepto de impuesto inmobiliario. Los datos dentro
del archivo tienen el siguiente formato:
id_cliente, año, deuda
Escribir un programa que genere un archivo que contenga todos los clientes con
la deuda total.*/

#include <stdio.h>
typedef struct
{
    int id_cliente;
    int total_deuda;
} cliente;

int buscar_cliente(cliente *clientes, int id, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        if (clientes[i].id_cliente == id)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    cliente clientes[20];
    FILE *fp1, *fp2;
    int id=0, year, debt=0, pos=0, c=0;
    fp1 = fopen("deudas_asu.txt", "r");
    fp2 = fopen("totales.txt", "w");

    if (fp1 != NULL && fp2 != NULL)
    {

        while ((fscanf(fp1, "%d %d %d", &id, &year, &debt)) == 3)
        {
            pos = buscar_cliente(clientes, id,c);
            if (pos != -1)
            {
                clientes[pos].total_deuda += debt;
            }
            else
            {
                clientes[c].id_cliente = id;
                clientes[c].total_deuda = debt;
                c++;
            }
        }
        fclose(fp1);
        for (int i = 0; i < c ; i++)
        {
            fprintf(fp2, "%d %d\n", clientes[i].id_cliente, clientes[i].total_deuda);
        }
        fclose(fp2);
    }
    else
    {
        printf("No se pudo abrir los archivos");
    }

    return 0;
}