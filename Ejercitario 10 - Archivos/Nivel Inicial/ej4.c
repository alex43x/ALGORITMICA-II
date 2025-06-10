#include <stdio.h>
#include <string.h>

void quitarSalto(char *str) {
    str[strcspn(str, "\n")] = 0;
}

int main() {
    FILE *fp1, *fp2;
    char c;
    char entrada[100], salida[100];

    printf("Ingrese nombre del archivo de entrada: ");
    fgets(entrada, sizeof(entrada), stdin);
    quitarSalto(entrada);

    fp1 = fopen(entrada, "r");
    if (fp1 == NULL) {
        printf("No se ha encontrado el archivo.\n");
        return 1;
    }

    printf("Ingrese nombre del archivo de salida: ");
    fgets(salida, sizeof(salida), stdin);
    quitarSalto(salida);

    fp2 = fopen(salida, "w");
    if (fp2 == NULL) {
        printf("No se pudo crear el archivo de salida.\n");
        fclose(fp1);
        return 1;
    }

    while ((c = fgetc(fp1)) != EOF) {
        fputc(c, fp2);
    }

    printf("Archivo copiado con exito.\n");

    fclose(fp1);
    fclose(fp2);
    return 0;
}
