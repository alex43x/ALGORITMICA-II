/*Se realizó una encuesta para conocer al candidato presidencial con mayor intención
de votos. Existen tres candidatos. El archivo encuesta.txt contiene las mediciones
realizadas. Cada línea del archivo contiene el número del candidato elegido por la
persona encuestada (1, 2 o 3). Escribir programa que lea el archivo e imprima en
pantalla el siguiente resumen:
**** Intenciones de voto ****
Intenciones de voto candidato 1: xx (yy%)
Intenciones de voto candidato 2: xx (yy%)
Intenciones de voto candidato 3: xx (yy%)*/

#include <stdio.h>

int main()
{
    FILE *fp;
    int v1 = 0, v2 = 0, v3 = 0, value = 0;
    fp = fopen("encuesta.txt", "r");
    if (fp != NULL)
    {
        while ((fscanf(fp, "%d", &value)) == 1)
        {
            if (value == 1)
            {
                v1++;
            }
            else if (value == 2)
            {
                v2++;
            }
            else
            {
                v3++;
            }
        }
        fclose(fp);
        printf("**** Intenciones de voto ****\nIntenciones de voto candidato 1: %d (%.2f%))\nIntenciones de voto candidato 2: %d (%.2f%)\nIntenciones de voto candidato 3: %d (%.2f%)*/", v1, (float)100 * v1 / (v1 + v2 + v3), v2, (float)100 * v2 / (v1 + v2 + v3), v3, (float)100 * v3 / (v1 + v2 + v3));
    }
    else
    {
        printf("No se pudo abrir el archivo");
    }

    return 0;
}