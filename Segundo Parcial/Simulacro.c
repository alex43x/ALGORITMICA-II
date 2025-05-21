#include <stdio.h>
#include <string.h>

typedef struct
{
    int cod;
    char airline[15];
    int pasajeros;
    char origen[10];
    char horaorigen[6];
    char destino[10];
    char horadestino[6];
    int pista;
} vuelo;

int validate(int *N)
{
    do
    {
        while ((scanf("%d", N)) != 1)
        {
            while ((*N = getchar()) != '\n' && *N != EOF)
                ;
            printf("El valor debe ser un nro natural\n");
        }

    } while (*N < 1);
    getchar();
    return 0;
}

int validatePista(int *N)
{
    do
    {
        while ((scanf("%d", N)) != 1)
        {
            while ((*N = getchar()) != '\n' && *N != EOF)
                ;
            printf("El valor debe ser 2 o 22\n");
        }

    } while (*N != 2 && *N != 22);
    getchar();
    return 0;
}

int validateresp(int *N)
{
    do
    {
        while ((scanf("%d", N)) != 1)
        {
            while ((*N = getchar()) != '\n' && *N != EOF)
                ;
            printf("El valor debe ser 1 o 2\n");
        }

    } while (*N != 1 && *N != 2);
    getchar();
    return 0;
}
int validateopt(int *N)
{
    do
    {
        while ((scanf("%d", N)) != 1)
        {
            while ((*N = getchar()) != '\n' && *N != EOF)
                ;
            printf("El valor debe ser 1, 2 o 3\n");
        }

    } while (*N < 1 || *N > 3);
    getchar();
    return 0;
}

int registrarVuelos(vuelo *Vuelos, int *cfr, int *c2, int *c22, int *pasajeros, int *minp, int *maxp, int *og, int *dt)
{
    if (*cfr == 25)
    {
        printf("Se ha llegado al límite de registros...\n");
        return 0;
    }

    int res = 0; // Controlador de respuesta para seguir en el bucle
    for (int i = *cfr; i < 25; i++)
    {
        printf("Ingrese codigo de vuelo: \n");
        validate(&(Vuelos + i)->cod);
        printf("Ingrese cantidad de pasajeros: \n");
        validate(&(Vuelos + i)->pasajeros);
        printf("Ingrese aerolinea: \n");
        fgets((Vuelos + i)->airline, sizeof((Vuelos + i)->airline), stdin);
        char *n = strchr((Vuelos + i)->airline, '\n');
        if (n)
        {
            *n = '\0';
        }
        printf("Ingrese aeropuerto origen: \n");
        fgets((Vuelos + i)->origen, sizeof((Vuelos + i)->origen), stdin);
        char *o = strchr((Vuelos + i)->origen, '\n');
        if (o)
        {
            *o = '\0';
        }
        printf("Ingrese hora origen: \n");
        fgets((Vuelos + i)->horaorigen, sizeof((Vuelos + i)->horaorigen), stdin);
        char *ho = strchr((Vuelos + i)->horaorigen, '\n');
        if (ho)
        {
            *ho = '\0';
        }
        printf("Ingrese aeropuerto destino: \n");
        fgets((Vuelos + i)->destino, sizeof((Vuelos + i)->destino), stdin);
        char *d = strchr((Vuelos + i)->destino, '\n');
        if (d)
        {
            *d = '\0';
        }
        printf("Ingrese hora destino: \n");
        fgets((Vuelos + i)->horadestino, sizeof((Vuelos + i)->horadestino), stdin);
        char *hd = strchr((Vuelos + i)->horadestino, '\n');
        if (hd)
        {
            *hd = '\0';
        }
        printf("Ingrese pista (2 o 22): \n");
        validatePista(&(Vuelos + i)->pista);
        if ((Vuelos + i)->pista == 22)
        {
            *c22+=1;
        }
        else
        {
            *c2+=1;
        }
        *pasajeros += (Vuelos + i)->pasajeros;
        if ((Vuelos + i)->pasajeros < *minp)
        {
            *minp = (Vuelos + i)->pasajeros;
        }
        if ((Vuelos + i)->pasajeros > *maxp)
        {
            *maxp = (Vuelos + i)->pasajeros;
        }
        if (strcmp((Vuelos + i)->origen, "SGAS") == 0)
        {
            *og+=1;
        }
        if (strcmp((Vuelos + i)->destino, "SGAS") == 0)
        {
            *dt+=1;
        }
        *cfr+=1;
        printf("Vuelos Registrados: %d\n", *cfr);
        printf("Desea seguir cargando datos?\n1- Si\n2- No\n");
        validateresp(&res);

        if (res == 2)
        {
            i = 25;
        }
    }
    return 0;
}

int estadisticas(vuelo *Vuelos, int *cfr, int *c2, int *c22, int *pasajeros, int *minp, int *maxp, int *og, int *dt)
{
    if(*cfr==0){
        printf("No hay vuelos registrados\n");
        return 0;
    }
    printf("*****ESTADISTICAS*****\n");
    printf("Vuelos Registrados: %d\n", *cfr);
    printf("Vuelos Origen(SGAS): %d\n", *og);
    printf("Vuelos Destino(SGAS): %d\n", *dt);
    printf("Vuelos por pista 02: %d\n", *c2);
    printf("Vuelos por pista 22: %d\n", *c22);
    printf("Pasajeros Registrados: %d\n", *pasajeros);
    printf("Primer Vuelo\nCodigo:%d\nOrigen:%s\nDestino:%s\nPista:%d\n", (Vuelos)->cod, (Vuelos)->origen, (Vuelos)->destino, (Vuelos)->pista);
    printf("Ultimo Vuelo\nCodigo:%d\nOrigen:%s\nDestino:%s\nPista:%d\n", (Vuelos + *(cfr)-1)->cod, (Vuelos + *(cfr)-1)->origen, (Vuelos + *(cfr)-1)->destino, (Vuelos + *(cfr)-1)->pista);
    for (int i = 0; i < *cfr; i++)
    {
        if ((Vuelos + i)->pasajeros == *minp)
        {
            printf("Vuelo con menor cantidad de Pasajeros.\nCodigo:%d\nOrigen:%s\nDestino:%s\nPista:%d\n", (Vuelos+i)->cod, (Vuelos+i)->origen, (Vuelos+i)->destino, (Vuelos+i)->pista);
        }
        if ((Vuelos + i)->pasajeros == *maxp)
        {
            printf("Vuelo con mayor cantidad de Pasajeros.\nCodigo:%d\nOrigen:%s\nDestino:%s\nPista:%d\n", (Vuelos+i)->cod, (Vuelos+i)->origen, (Vuelos+i)->destino, (Vuelos+i)->pista);
        }
    }
    float p=*pasajeros,c=*cfr;
    printf("Promedio de Pasajeros por vuelo: %.2f\n", p/c);

    return 0;
}

int main()
{
    int cfr = 0;                  // Contador de vuelos registrados
    int opt = 0;                  // Controlador de opciones del menu principal
    int c2 = 0, c22 = 0;          // Contadores de vuelos por pista
    int pasajeros = 0;            // Contador de pasajeros
    int og = 0, dt = 0;           // Contador de origen y destino a sgas
    int minp = 1000000, maxp = 0; // Mínimo y maximo de pasajeros
    vuelo Vuelos[25];             // Array de structs tipo vuelo
    do
    {
        printf("*******MENU - VUELOS********\nOpciones:\n1-Registrar Vuelos\n2-Ver Estadisticas\n3-Salir\nIngresa una de las opciones: ");
        validateopt(&opt);
        if (opt == 1)
        {
            registrarVuelos(Vuelos, &cfr, &c2, &c22, &pasajeros, &minp, &maxp, &og, &dt);
        }
        else if (opt == 2)
        {
            estadisticas(Vuelos, &cfr, &c2, &c22, &pasajeros, &minp, &maxp, &og, &dt);
        }
        else
        {
            printf("Gracias por usar el sistema :)\n");
        }

    } while (opt != 3);

    return 0;
}