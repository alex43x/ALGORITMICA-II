#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int isIntP(const char *cadena) {
    // Verificar que la cadena no esté vacía
    if (cadena[0] == '\0') {
        return 0;
    }

    // Revisar si cada carácter es un dígito
    for (size_t i = 0; i < strlen(cadena); i++) {
        if (!isdigit(cadena[i])) {
            return 0; // No es un número entero válido
        }
    }

    return 1; // Es un número entero válido
}

int getnum() {
    char entrada[20];
    int numero;

    while (1) {
        printf("Ingrese un numero entero positivo: ");
        fgets(entrada, sizeof(entrada), stdin);

        // Eliminar el salto de línea al final de la cadena
        entrada[strcspn(entrada, "\n")] = 0;

        if (isIntP(entrada)) {
            numero = atoi(entrada);
            if (numero > 0) {
                return numero;
            }
        }
        printf("Debe ingresar un numero entero positivo.\n");
    }
}

int main() {
    int num1, num2, aux; 

    num1 = getnum();
    num2 = getnum();

    if (num2 > num1) {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }

    while (num2 != 0) {
        aux = num2;
        num2 = num1 % num2;
        num1 = aux;
    }

    printf("El MCD es %d\n", aux);
    return 0;
}
