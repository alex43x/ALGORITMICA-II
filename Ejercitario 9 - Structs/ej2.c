/*Escribir un programa de facturación de clientes. Los clientes tienen un nombre,
el número de unidades solicitadas, el precio de cada unidad y el estado en que
se encuentra: moroso, atrasado, pagado. A partir de una lista de clientes,
obtener los siguientes listados:
a. Clientes en estado moroso.
b. Clientes en estado pagado con factura mayor a una determinada
cantidad.*/
#include <stdio.h>
#include <string.h>
typedef struct
{
    char name[30];
    int quantity;
    int price;
    char status[15];
} Cliente;

int registrarClientes(Cliente *clientes, int cantidad)
{
    for (int i = 0; i < cantidad; i++)
    {
        printf("Ingrese nombre del cliente: ");
        fgets((clientes + i)->name, sizeof((clientes + i)->name), stdin);
        // Eliminar \n
        char *nl = strchr((clientes + i)->name, '\n');
        if (nl)
            *nl = '\0';

        printf("Nombre ingresado: %s\n", (clientes + i)->name);

        printf("Ingrese cantidad de unidades: ");
        scanf(" %d", &(clientes + i)->quantity);

        printf("Ingrese precio unitario de unidades: ");
        scanf(" %d", &(clientes + i)->price);

        getchar();

        printf("Ingrese estado del cliente (moroso, atrasado, pagado): ");
        fgets((clientes + i)->status, sizeof((clientes + i)->status), stdin);
        // Elimina \n
        nl = strchr((clientes + i)->status, '\n');
        if (nl)
            *nl = '\0';

        printf("Estado ingresado: %s\n", (clientes + i)->status);
    }
    return 0;
}

void printMorosos(Cliente *clientes, int cant)
{
    printf("LISTA DE MOROSOS:\n");
    for (int i = 0; i < cant; i++)
    {
        if ((strcmp((clientes+i)->status,"moroso"))==0)
        {
            printf("Cliente moroso: %s\n", (clientes + i)->name);
        }
    }
}

void printPagados(Cliente *clientes, int cant, int min)
{
    printf("LISTA DE Pagados:\n");
    for (int i = 0; i < cant; i++)
    {
        if ((strcmp((clientes+i)->status,"pagado"))==0 && ((clientes+i)->price*(clientes+i)->quantity)>min)
        {
            printf("Cliente pagado: %s\n", (clientes + i)->name);
        }
    }
}

int main()
{
    int N = 1;
    Cliente clientes[N];
    registrarClientes(clientes, N);
    printMorosos(clientes, N);
    printPagados(clientes, N,10000);
    return 0;
}